0x6EF2F0: mov     eax, [esp+arg_C]
0x6EF2F4: push    ebx
0x6EF2F5: push    ebp
0x6EF2F6: push    esi
0x6EF2F7: mov     esi, ecx
0x6EF2F9: mov     cl, [eax]
0x6EF2FB: mov     eax, [esi+4]
0x6EF2FE: test    eax, eax
0x6EF300: mov     byte ptr [esp+0Ch+arg_C], cl
0x6EF304: jnz     short loc_6EF30A
0x6EF306: xor     ebp, ebp
0x6EF308: jmp     short loc_6EF30F
0x6EF30A: mov     ebp, [esi+0Ch]
0x6EF30D: sub     ebp, eax
0x6EF30F: mov     ebx, [esp+0Ch+arg_8]
0x6EF313: test    ebx, ebx
0x6EF315: jz      loc_6EF48E
0x6EF31B: test    eax, eax
0x6EF31D: jnz     short loc_6EF323
0x6EF31F: xor     ecx, ecx
0x6EF321: jmp     short loc_6EF328
0x6EF323: mov     ecx, [esi+8]
0x6EF326: sub     ecx, eax
0x6EF328: or      edx, 0FFFFFFFFh
0x6EF32B: sub     edx, ecx
0x6EF32D: cmp     edx, ebx
0x6EF32F: jnb     short loc_6EF336
0x6EF331: call    sub_790B90
0x6EF336: test    eax, eax
0x6EF338: jnz     short loc_6EF33E
0x6EF33A: xor     ecx, ecx
0x6EF33C: jmp     short loc_6EF343
0x6EF33E: mov     ecx, [esi+8]
0x6EF341: sub     ecx, eax
0x6EF343: add     ecx, ebx
0x6EF345: cmp     ebp, ecx
0x6EF347: push    edi; MaxCount
0x6EF348: jnb     loc_6EF40B
0x6EF34E: mov     ecx, ebp
0x6EF350: shr     ecx, 1
0x6EF352: or      edx, 0FFFFFFFFh
0x6EF355: sub     edx, ecx
0x6EF357: cmp     edx, ebp
0x6EF359: jnb     short loc_6EF35F
0x6EF35B: xor     ebp, ebp
0x6EF35D: jmp     short loc_6EF361
0x6EF35F: add     ebp, ecx
0x6EF361: test    eax, eax
0x6EF363: jnz     short loc_6EF369
0x6EF365: xor     ecx, ecx
0x6EF367: jmp     short loc_6EF36E
0x6EF369: mov     ecx, [esi+8]
0x6EF36C: sub     ecx, eax
0x6EF36E: add     ecx, ebx
0x6EF370: cmp     ebp, ecx
0x6EF372: jnb     short loc_6EF384
0x6EF374: test    eax, eax
0x6EF376: jnz     short loc_6EF37C
0x6EF378: xor     ecx, ecx
0x6EF37A: jmp     short loc_6EF381
0x6EF37C: mov     ecx, [esi+8]
0x6EF37F: sub     ecx, eax
0x6EF381: lea     ebp, [ecx+ebx]
0x6EF384: push    ebp; Size
0x6EF385: call    FormHeapAlloc
0x6EF38A: mov     ecx, [esi+4]
0x6EF38D: mov     edi, eax
0x6EF38F: mov     eax, [esp+14h+Src]
0x6EF393: add     esp, 4
0x6EF396: sub     eax, ecx
0x6EF398: lea     edx, [eax+edi]
0x6EF39B: mov     [esp+10h+arg_8], edx
0x6EF39F: jz      short loc_6EF3AD
0x6EF3A1: push    eax; Src
0x6EF3A2: push    ecx; Src
0x6EF3A3: push    eax; DstSize
0x6EF3A4: push    edi; Dst
0x6EF3A5: call    _memmove_s
0x6EF3AA: add     esp, 10h
0x6EF3AD: mov     ecx, [esp+10h+arg_8]
0x6EF3B1: lea     eax, [esp+10h+arg_C]
0x6EF3B5: push    eax
0x6EF3B6: push    ebx
0x6EF3B7: push    ecx
0x6EF3B8: mov     ecx, esi
0x6EF3BA: call    sub_7890F0
0x6EF3BF: mov     ecx, [esi+8]
0x6EF3C2: mov     edx, [esp+10h+Src]
0x6EF3C6: sub     ecx, edx
0x6EF3C8: jz      short loc_6EF3D6
0x6EF3CA: push    ecx; Src
0x6EF3CB: push    edx; Src
0x6EF3CC: push    ecx; DstSize
0x6EF3CD: push    eax; Dst
0x6EF3CE: call    _memmove_s
0x6EF3D3: add     esp, 10h
0x6EF3D6: mov     ecx, [esi+4]
0x6EF3D9: test    ecx, ecx
0x6EF3DB: jnz     short loc_6EF3E1
0x6EF3DD: xor     eax, eax
0x6EF3DF: jmp     short loc_6EF3E6
0x6EF3E1: mov     eax, [esi+8]
0x6EF3E4: sub     eax, ecx
0x6EF3E6: add     ebx, eax
0x6EF3E8: test    ecx, ecx
0x6EF3EA: jz      short loc_6EF3F5
0x6EF3EC: push    ecx
0x6EF3ED: call    FormHeapFree
0x6EF3F2: add     esp, 4
0x6EF3F5: lea     edx, [edi+ebp]
0x6EF3F8: lea     eax, [edi+ebx]
0x6EF3FB: mov     [esi+4], edi
0x6EF3FE: pop     edi
0x6EF3FF: mov     [esi+0Ch], edx
0x6EF402: mov     [esi+8], eax
0x6EF405: pop     esi
0x6EF406: pop     ebp
0x6EF407: pop     ebx
0x6EF408: retn    10h
0x6EF40B: mov     ebp, [esi+8]
0x6EF40E: mov     edi, [esp+10h+Src]
0x6EF412: mov     ecx, ebp
0x6EF414: sub     ecx, edi
0x6EF416: cmp     ecx, ebx
0x6EF418: mov     ecx, esi
0x6EF41A: jnb     short loc_6EF45C
0x6EF41C: lea     edx, [edi+ebx]
0x6EF41F: push    edx; Dst
0x6EF420: push    ebp; int
0x6EF421: push    edi; Src
0x6EF422: call    sub_556CD0
0x6EF427: mov     eax, [esi+8]
0x6EF42A: mov     edx, edi
0x6EF42C: lea     ecx, [esp+10h+arg_C]
0x6EF430: push    ecx
0x6EF431: sub     edx, eax
0x6EF433: add     edx, ebx
0x6EF435: push    edx
0x6EF436: push    eax
0x6EF437: mov     ecx, esi
0x6EF439: call    sub_7890F0
0x6EF43E: add     [esi+8], ebx
0x6EF441: mov     esi, [esi+8]
0x6EF444: lea     eax, [esp+10h+arg_C]
0x6EF448: push    eax
0x6EF449: sub     esi, ebx
0x6EF44B: push    esi
0x6EF44C: push    edi
0x6EF44D: call    sub_6EF2D0
0x6EF452: add     esp, 0Ch
0x6EF455: pop     edi
0x6EF456: pop     esi
0x6EF457: pop     ebp
0x6EF458: pop     ebx
0x6EF459: retn    10h
0x6EF45C: push    ebp; Dst
0x6EF45D: mov     eax, ebp
0x6EF45F: sub     eax, ebx
0x6EF461: push    ebp; int
0x6EF462: push    eax; Src
0x6EF463: mov     [esp+1Ch+arg_8], eax
0x6EF467: call    sub_556CD0
0x6EF46C: mov     ecx, [esp+10h+arg_8]
0x6EF470: push    ebp; int
0x6EF471: push    ecx; int
0x6EF472: push    edi; Src
0x6EF473: mov     [esi+8], eax
0x6EF476: call    sub_788A80
0x6EF47B: lea     edx, [esp+1Ch+arg_C]
0x6EF47F: push    edx
0x6EF480: lea     eax, [edi+ebx]
0x6EF483: push    eax
0x6EF484: push    edi
0x6EF485: call    sub_6EF2D0
0x6EF48A: add     esp, 18h
0x6EF48D: pop     edi
0x6EF48E: pop     esi
0x6EF48F: pop     ebp
0x6EF490: pop     ebx
0x6EF491: retn    10h
