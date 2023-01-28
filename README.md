# Pressor
## The all-in-one tool for media compression
Pressor is a C program trying to solve the storage issues caused by inefficiently encoded photos, videos and audios. Depending on your hardware, time, quality and compatibility needs, Pressor will try its best to compress your medias, going from a simple file to an entire movie collection or photo gallery.

Based on previous experience, the prior version of pressor (developed [here](https://github.com/tyravex/pressor)) was able to compress a photo gallery by a factor of ~8 (40gb to 5gb), with minimal loss in quality, thanks to new clever and efficient codecs (AV1, AVIF and JXL to name a few) and superior encoding complexity.

For now, this full rewrite is just at its beginning, so please be patient before I release the first version.

## Features
- Take as input a file or directory
- Toggle videos/photos/audios compression
- Chose the output strategy for multiple files (tree or single folder)
- Include or exclude extensions for specific media types
- Toggle the search inside subfolders or hidden files/folders
- Search by extensions, file content (mime type), or both
- Chose the compression codec for images (JPG, QIO, AVIF, JXL)
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
