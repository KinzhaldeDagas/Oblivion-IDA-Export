0x7E5890: push    0FFFFFFFFh
0x7E5892: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7E5897: mov     eax, large fs:0
0x7E589D: push    eax
0x7E589E: push    ecx
0x7E589F: push    ebx
0x7E58A0: push    esi
0x7E58A1: push    edi
0x7E58A2: mov     eax, ds:0B30AACh
0x7E58A7: xor     eax, esp
0x7E58A9: push    eax
0x7E58AA: lea     eax, [esp+20h+var_C]
0x7E58AE: mov     large fs:0, eax
0x7E58B4: mov     ebx, ecx
0x7E58B6: mov     eax, [ebx+34h]
0x7E58B9: test    eax, eax
0x7E58BB: jnz     short loc_7E5930
0x7E58BD: push    10h; Size
0x7E58BF: call    FormHeapAlloc
0x7E58C4: add     esp, 4
0x7E58C7: mov     [esp+20h+var_10], eax
0x7E58CB: test    eax, eax
0x7E58CD: mov     [esp+20h+var_4], 0
0x7E58D5: jz      short loc_7E58F4
0x7E58D7: mov     ecx, [esp+20h+vtable]
0x7E58DB: push    0
0x7E58DD: push    0; lightCount
0x7E58DF: push    1; byte6
0x7E58E1: push    17Eh; selector
0x7E58E6: push    ecx; geometry
0x7E58E7: push    eax; outPass
0x7E58E8: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x7E58ED: add     esp, 18h
0x7E58F0: mov     edi, eax
0x7E58F2: jmp     short loc_7E58F6
0x7E58F4: xor     edi, edi
0x7E58F6: mov     edx, [ebx+28h]
0x7E58F9: mov     eax, [edx+4]
0x7E58FC: lea     esi, [ebx+28h]
0x7E58FF: mov     ecx, esi
0x7E5901: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E5909: call    eax
0x7E590B: mov     [eax+8], edi
0x7E590E: mov     dword ptr [eax+4], 0
0x7E5915: mov     ecx, [esi+4]
0x7E5918: mov     [eax], ecx
0x7E591A: mov     ecx, [esi+4]
0x7E591D: test    ecx, ecx
0x7E591F: jz      short loc_7E5926
0x7E5921: mov     [ecx+4], eax
0x7E5924: jmp     short loc_7E5929
0x7E5926: mov     [esi+8], eax
0x7E5929: add     dword ptr [esi+0Ch], 1
0x7E592D: mov     [esi+4], eax
0x7E5930: lea     eax, [ebx+28h]
0x7E5933: mov     ecx, [esp+20h+var_C]
0x7E5937: mov     large fs:0, ecx
0x7E593E: pop     ecx
0x7E593F: pop     edi
0x7E5940: pop     esi
0x7E5941: pop     ebx
0x7E5942: add     esp, 10h
0x7E5945: retn    10h
0x9CA420: mov     eax, [ebp-10h]
0x9CA423: push    eax
0x9CA424: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA429: pop     ecx
0x9CA42A: retn
0x9CA42B: mov     edx, [esp+arg_4]
0x9CA42F: lea     eax, [edx-10h]
0x9CA432: mov     ecx, [edx-14h]
0x9CA435: xor     ecx, eax
0x9CA437: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA43C: mov     eax, offset stru_AF2B24
0x9CA441: jmp     ___CxxFrameHandler3
