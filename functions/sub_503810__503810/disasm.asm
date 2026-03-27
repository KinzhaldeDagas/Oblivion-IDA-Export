0x503810: sub     esp, 0Ch
0x503813: lea     eax, [esp+0Ch+var_4]
0x503817: push    eax
0x503818: mov     eax, [esp+10h+l]
0x50381C: lea     ecx, [esp+10h+var_C]
0x503820: push    ecx
0x503821: mov     ecx, [esp+14h+arg_10]
0x503825: lea     edx, [esp+14h+var_8]
0x503829: push    edx; UInt16
0x50382A: mov     edx, [esp+18h+arg_C]
0x50382E: push    eax; l
0x50382F: mov     eax, [esp+1Ch+a4]
0x503833: push    ecx; a6
0x503834: mov     ecx, [esp+20h+a3]
0x503838: push    edx; a5
0x503839: mov     edx, [esp+24h+arg_4]
0x50383D: push    eax; a4
0x50383E: mov     eax, [esp+28h+a1]
0x503842: push    ecx; a3
0x503843: push    edx; a2
0x503844: push    eax; a1
0x503845: mov     dword ptr [esp+34h+var_8], 0
0x50384D: mov     [esp+34h+var_C], 0
0x503855: mov     [esp+34h+var_4], 0
0x50385D: call    Script_ExtractArgs
0x503862: add     esp, 28h
0x503865: test    al, al
0x503867: jnz     short loc_50386D
0x503869: add     esp, 0Ch
0x50386C: retn
0x50386D: fldz
0x50386F: mov     eax, [esp+0Ch+var_C]
0x503872: test    eax, eax
0x503874: mov     ecx, [esp+0Ch+arg_18]
0x503878: fstp    qword ptr [ecx]
0x50387A: jz      short loc_50388F
0x50387C: mov     ecx, dword ptr [esp+0Ch+var_8]
0x503880: test    ecx, ecx
0x503882: jz      short loc_50388F
0x503884: mov     edx, [esp+0Ch+var_4]
0x503888: push    edx
0x503889: push    eax
0x50388A: call    sub_51F0C0
0x50388F: mov     al, 1
0x503891: add     esp, 0Ch
0x503894: retn
