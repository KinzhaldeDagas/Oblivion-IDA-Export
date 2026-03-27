0x45DED8: mov     edi, [edi+4]
0x45DEDB: test    edi, edi
0x45DEDD: jnz     SaveLoad_SaveCreatedObjects___CountLoop_Body
0x45DEE3: mov     eax, [ebx+18h]
0x45DEE6: shr     eax, 9
0x45DEE9: test    al, 1
0x45DEEB: jz      short loc_45DEF6
0x45DEED: add     dword ptr [ebx+90h], 4
0x45DEF4: jmp     short loc_45DF19
0x45DEF6: mov     eax, [esp+arg_34]
0x45DEFA: push    1
0x45DEFC: lea     ecx, [esp+4+arg_10]
0x45DF00: push    ecx
0x45DF01: push    4
0x45DF03: lea     edx, [esp+0Ch+arg_C]
0x45DF07: push    edx
0x45DF08: push    eax
0x45DF09: mov     eax, [eax+8]
0x45DF0C: mov     [esp+14h+arg_10], 1
0x45DF14: call    eax
0x45DF16: add     esp, 14h
0x45DF19: cmp     [esp+arg_C], 0
0x45DF1E: jz      SaveLoad_SaveCreatedObjects___Done
0x45DF24: lea     eax, [ebx+28h]
0x45DF27: test    eax, eax
0x45DF29: mov     [esp+arg_10], eax
0x45DF2D: jz      SaveLoad_SaveCreatedObjects___Done
