0x997380: xor     eax, eax
0x997382: cmp     [esp+MaxCount], eax
0x997386: jbe     short locret_997399
0x997388: mov     ecx, [esp+Str]
0x99738C: cmp     byte ptr [ecx], 0
0x99738F: jz      short locret_997399
0x997391: inc     eax
0x997392: inc     ecx
0x997393: cmp     eax, [esp+MaxCount]
0x997397: jb      short loc_99738C
0x997399: retn
