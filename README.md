## README ##

Welcome to my **Computer Graphics** repository. Here, I post sourcecode for each and everything in CG that they make me do during class. This is my way of giving back to the community! Here are a few guidelines for you, if you intend to use this code in your class -

1. **Please do not copy.** The code presented here is for you to understand the concepts, and not for you to copy-paste and submit.
2. **I don't vouch for correctness.** The code presented here is not guaranteed to be correct. Feel free to spot errors and report back.
3. **Please share the love.** I encourage you to start your own repository of your classroom code. Lets make it an academic playground!

### Guidelines for running this code ###

Unfortunately, all the code in this repository uses a header file called ``graphics.h``, which is not a part of standard C++. As a result, your regular ``g++`` won't compile these programs out-of-the-box. Here's an elegant workaround:

1. Download and install Code::Blocks IDE from http://codeblocks.org (Code::Blocks is a simple to use, lightweight C/C++ IDE that runs like a charm on even an underpowered machine. Make sure you download the MinGW version (Unless, of course, you have already installed MinGW))

2. Download this file and extract its contents - http://codecutter.org/tools/winbgim/V6_0/WinBGIm_Library6_0_Nov2005.zip

3. You will find three files inside the package. Copy ``graphics.h`` and ``winbgim.h`` to the ``include`` folder inside your MinGW installation. Copy ``libbgi.a`` to the ``lib`` folder inside your MinGW installation.

3. In Code::Blocks, go to ``Settings > Compiler & Debugger > Linker Settings`` and add the following files from the ``lib`` folder, in this order only:

    * ``libbgi.a``
    * ``libgdi32.a``
    * ``libcomdlg32.a``
    * ``libuuid.a``
    * ``liboleaut32.a``
    * ``libole32.a``

4. Open the ``graphics.h`` file that you copied to the ``include`` folder in Step 2.

5. Go to line 302, and remove the following statement: ``int right=0,`` (Yes, including the comma). Save the file.

6. You're done! Now all the programs presented in this repo will compile without complain!
