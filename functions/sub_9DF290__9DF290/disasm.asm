0x9DF290: mov     eax, stru_B3FA90.x; Fog decode: copies default RGB globals into renderer startup color vector; fixed/default boundary, not dynamic world fog upload.
0x9DF295: mov     ecx, stru_B3FA90.y
0x9DF29B: mov     edx, stru_B3FA90.z
0x9DF2A1: mov     ds:0B350DCh, eax; Fog fixed/default decode: renderer startup color vector red = B3FA90; startup/default cache only, not active B333E4 shader fog.
0x9DF2A6: mov     ds:0B350E0h, ecx; Fog fixed/default decode: renderer startup color vector green = B3FA94; startup/default cache only, not active B333E4 shader fog.
0x9DF2AC: mov     ds:0B350E4h, edx; Fog fixed/default decode: renderer startup color vector blue = B3FA98; startup/default cache only, not active B333E4 shader fog.
0x9DF2B2: retn
