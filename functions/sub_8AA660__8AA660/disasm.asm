0x8AA660: xor     edx, edx
0x8AA662: sub     esp, 0Ch
0x8AA665: cmp     [ecx+0Ch], edx
0x8AA668: jbe     short loc_8AA6C8
0x8AA66A: fld     dword ptr ds:0A30634h
0x8AA670: push    ebx
0x8AA671: fstp    [esp+10h+var_C]
0x8AA675: push    ebp
0x8AA676: fldz
0x8AA678: mov     ebp, [esp+14h+var_C]
0x8AA67C: fdiv    qword ptr ds:0A309F0h
0x8AA682: push    esi
0x8AA683: push    edi
0x8AA684: xor     esi, esi
0x8AA686: fstp    [esp+1Ch+var_4]
0x8AA68A: fld     [esp+1Ch+var_4]
0x8AA68E: mov     edi, [esp+1Ch+var_4]
0x8AA692: fstp    [esp+1Ch+var_8]
0x8AA696: mov     ebx, [esp+1Ch+var_8]
0x8AA69A: lea     ebx, [ebx+0]
0x8AA6A0: mov     eax, [ecx+4]
0x8AA6A3: add     eax, esi
0x8AA6A5: mov     [eax], ebp
0x8AA6A7: mov     [eax+4], ebx
0x8AA6AA: add     edx, 1
0x8AA6AD: mov     [eax+8], edi
0x8AA6B0: add     esi, 0Ch
0x8AA6B3: cmp     edx, [ecx+0Ch]
0x8AA6B6: jb      short loc_8AA6A0
0x8AA6B8: pop     edi
0x8AA6B9: pop     esi
0x8AA6BA: xor     eax, eax
0x8AA6BC: pop     ebp
0x8AA6BD: mov     [ecx+0Ch], eax
0x8AA6C0: mov     [ecx+10h], eax
0x8AA6C3: pop     ebx
0x8AA6C4: add     esp, 0Ch
0x8AA6C7: retn
0x8AA6C8: mov     [ecx+0Ch], edx
0x8AA6CB: mov     [ecx+10h], edx
0x8AA6CE: add     esp, 0Ch
0x8AA6D1: retn
