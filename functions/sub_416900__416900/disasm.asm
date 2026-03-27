0x416900: mov     ecx, dword_B3350C
0x416906: xor     eax, eax
0x416908: test    ecx, ecx
0x41690A: jbe     short loc_41691F
0x41690C: mov     edx, dword_B33510
0x416912: cmp     dword ptr [edx+eax*4], 0
0x416916: jnz     short loc_41693D
0x416918: add     eax, 1
0x41691B: cmp     eax, ecx
0x41691D: jb      short loc_416912
0x41691F: xor     eax, eax
0x416921: test    eax, eax
0x416923: push    esi
0x416924: mov     esi, eax
0x416926: jz      short loc_41698E
0x416928: push    edi
0x416929: lea     esp, [esp+0]
0x416930: mov     eax, [esi]
0x416932: test    eax, eax
0x416934: mov     edi, [esi+8]
0x416937: jz      short loc_416942
0x416939: mov     esi, eax
0x41693B: jmp     short loc_416980
0x41693D: mov     eax, [edx+eax*4]
0x416940: jmp     short loc_416921
0x416942: mov     eax, [esi+4]
0x416945: mov     edx, EffectSettingCollection
0x41694B: push    eax
0x41694C: mov     eax, [edx+4]
0x41694F: mov     ecx, offset EffectSettingCollection
0x416954: call    eax
0x416956: mov     ecx, dword_B3350C
0x41695C: add     eax, 1
0x41695F: cmp     eax, ecx
0x416961: jnb     short loc_41697E
0x416963: mov     edx, dword_B33510
0x416969: lea     esp, [esp+0]
0x416970: mov     esi, [edx+eax*4]
0x416973: test    esi, esi
0x416975: jnz     short loc_416980
0x416977: add     eax, 1
0x41697A: cmp     eax, ecx
0x41697C: jb      short loc_416970
0x41697E: xor     esi, esi
0x416980: mov     edx, [edi]
0x416982: mov     eax, [edx+6Ch]
0x416985: mov     ecx, edi
0x416987: call    eax
0x416989: test    esi, esi
0x41698B: jnz     short loc_416930
0x41698D: pop     edi
0x41698E: pop     esi
0x41698F: retn
