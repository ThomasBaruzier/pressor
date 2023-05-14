# Pressor
## The all-in-one tool for media compression
Pressor is a C program trying to solve the storage issues caused by inefficiently encoded photos, videos and audios. Depending on your hardware, time, quality and compatibility needs, Pressor will try its best to compress your medias, going from a simple file to an entire movie collection or photo gallery.

Based on previous experience, the prior version of pressor (developed [here](https://github.com/tyravex/pressor)) was able to compress a photo gallery by a factor of ~8 (40gb to 5gb), with minimal loss in quality, thanks to new clever and efficient codecs (AV1, AVIF and JXL to name a few) and superior encoding complexity.

For now, this full rewrite is just at its beginning, so please be patient before I release the first version (likely this summmer).

## Try it now: pressor.sh

This is the previous version taken from [github.com/tyravex/pressor](https://github.com/tyravex/pressor).
If you want to try pressor before the official version comes out, this is the way.
A lot of features are still missing but it's usable for most cases.

### Documentation

```
USAGE : ./pressor.sh <input(s)> <output> [arguments]

Input options :

  -i, --include {all|none|videos|images|audios|.<extention(s)>}
  -e, --exclude {all|none|videos|images|audios|.<extention(s)>}
      > Include or exclude file types or extentions (case insensitive)
      > Default : all (in both options)

  -r, --recursive
      > Include subfolders
      > Default : true

  -d, --deep-search
      > Search files by their content, not their extentions
      > Default : false

  -H, --hidden-search
      > Search for hidden files and inside hidden directories
      > Default : false

  -s, --skip-compressed
      > Skip already compressed files
      > Default : true

  -o, --overwrite
      > Overwrites already compressed files
      > Default : false

Encoding options :

  -c, --codec {jpg|jxl|avif|x264|x265|vp9|av1|vvc|mp3|opus} {quality}
      > Choose encoding codecs and quality parameters
      > Quality arguments (for expert users) :
        • jpg <q:scale> (2-31) <preset> (placebo-veryfast)
        • avif <min> (0-63) <max> (0-63) <speed> (0-10)
        • jxl <quality> (100-0) <effort> (9-1)
        • x264|x265 <crf> (0-63) <preset> (placebo-veryfast) <mp3-quality> (0-9)
        • vp9 <crf> (0-63) <cpu-used> (0-16) <opus-bitrate> (512-1)
        • av1 <cq> (0-63) <cpu-used> (0-9) <opus-bitrate> (512-1)
        • vvc <qc> (0-63) <preset> (slower-fast) <opus-bitrate> (512-1)
        • mp3 <quality> (0-9) <preset> (placebo-veryfast)
        • opus <bitrate> (512-1) <speed> (10-0)
      > Defaults : set in config

  -C, --crop {all|images|videos} <width>x<height>|<max-length>
      > Crop and zoom to fit or set a maximum length without distortions
      > Default : none

  -t, --threads <all|number-of-threads>
      > Number of threads to use
      > Default : all

  -f, --ffmpeg-args <parameters/options>
      > Use custom ffmpeg arguments when applicable
      > Note : you will need to escape all the single/double quotes
      > Default : set in config

Output options :

  -R, --rename {all|none|videos|images|audios|<extention(s)>}
      > Rename the output files to their timestamps
      > Default : none

  -T, --tree
      > Copy the input folder hierarachy to output
      > Default : true

Other options :

  -n, --no-confirm : skip prompt before compression
  -v, --verbose : print more information
  -l, --log {file} : --verbose redirected to a file
  -L, --loglevel <0|1|2|info|warning|error>
```

### Demo

![image](https://github.com/ThomasBaruzier/pressor/assets/119688458/91f09253-2410-48fa-97f4-32844ef804da)

### Examples

#### Input (600kb, 1920x804):

![input](https://github.com/ThomasBaruzier/pressor/assets/119688458/aed44085-264d-43ee-b759-6fa66b5a93ed)

#### Output (60kb, 1920x804, 10x smaller):

![output](https://cdn.3z.ee/Github-assets/Pressor/sunset.avif)
[Credits - Louis Coyle - Dribbble](https://dribbble.com/louiscoyle)

#### Input (7mb, 2844x4282) :

![input](https://github.com/ThomasBaruzier/pressor/assets/119688458/b36bf2c1-d6fd-41f3-b496-53479f8f45cd)

#### Output (80kb, 2844x4282, 87x smaller):

![output](https://cdn.3z.ee/Github-assets/Pressor/camera-80kb.avif)
[Credits - EnisuVI - Reddit](https://www.reddit.com/user/EnisuVI/)

## Planned Features
- Take as input a file or directory
- Toggle videos/photos/audios compression
- Chose the output strategy for multiple files (tree or single folder)
- Include or exclude extensions for specific media types
- Toggle the search inside subfolders or hidden files/folders
- Search by extensions, file content (mime type), or both
- Chose the compression codec for images (JPG, QOI, AVIF, JXL)
- Chose the compression codec for videos (x264, x265, VP9, AV1, VVC)
- Chose the compression codec for audios (MP3, OPUS)
- Chose photo/video/video/video audio quality, compression efficiency and bit depth per codec, while providing the best default values available.
- Chose the number of threads for compression
- Chose cropping/resizing values for any media type
- Chose resizing strategy (length x width, total pixel count, maximum/minimum length/height)
- Set a maximum number of FPS for videos
- Add custom FFmpeg arguments
- Toggle renaming for any media type or extensions
- Choose renaming strategy (regex, timestamps)
- Toggle log levels or logging
