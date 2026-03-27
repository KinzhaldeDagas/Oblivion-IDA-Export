0x6E78F0: push    0FFFFFFFFh
0x6E78F2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6E78F7: mov     eax, large fs:0
0x6E78FD: push    eax
0x6E78FE: push    ecx
0x6E78FF: push    ebx
0x6E7900: push    esi
0x6E7901: push    edi
0x6E7902: mov     eax, ds:0B30AACh
0x6E7907: xor     eax, esp
0x6E7909: push    eax
0x6E790A: lea     eax, [esp+20h+var_C]
0x6E790E: mov     large fs:0, eax
0x6E7914: mov     edi, ecx
0x6E7916: push    28h ; '('; Size
0x6E7918: call    FormHeapAlloc
0x6E791D: mov     esi, eax
0x6E791F: add     esp, 4
0x6E7922: mov     [esp+20h+var_10], esi
0x6E7926: xor     ebx, ebx
0x6E7928: cmp     esi, ebx
0x6E792A: mov     [esp+20h+var_4], ebx
0x6E792E: jz      short loc_6E7955
0x6E7930: mov     ecx, esi
0x6E7932: call    NiObject_constr
0x6E7937: fld     dword ptr ds:0A30634h
0x6E793D: mov     dword ptr [esi], offset ??_7NiBSplineBasisData@@6B@; const NiBSplineBasisData::`vftable'
0x6E7943: fstp    dword ptr [esi+1Ch]
0x6E7946: mov     [esi+8], ebx
0x6E7949: mov     [esi+20h], ebx
0x6E794C: mov     dword ptr [esi+24h], 3
0x6E7953: mov     ebx, esi
0x6E7955: mov     eax, [esp+20h+arg_0]
0x6E7959: push    eax
0x6E795A: push    ebx
0x6E795B: mov     ecx, edi
0x6E795D: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6E7965: call    sub_700770
0x6E796A: lea     esi, [edi+8]
0x6E796D: lea     edi, [ebx+8]
0x6E7970: mov     ecx, 8
0x6E7975: rep movsd
0x6E7977: mov     eax, ebx
0x6E7979: mov     ecx, [esp+20h+var_C]
0x6E797D: mov     large fs:0, ecx
0x6E7984: pop     ecx
0x6E7985: pop     edi
0x6E7986: pop     esi
0x6E7987: pop     ebx
0x6E7988: add     esp, 10h
0x6E798B: retn    4
