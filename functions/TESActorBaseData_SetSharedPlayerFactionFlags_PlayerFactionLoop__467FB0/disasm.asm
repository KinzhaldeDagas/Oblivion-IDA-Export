0x467FB0: mov     ecx, [eax]
0x467FB2: test    ecx, ecx
0x467FB4: jz      short TESActorBaseData_SetSharedPlayerFactionFlags___PlayerFactionLoop_next
0x467FB6: mov     edi, [ecx]
0x467FB8: movzx   edx, byte ptr [edi+34h]
0x467FBC: shr     edx, 3
0x467FBF: test    dl, 1
0x467FC2: jnz     short TESActorBaseData_SetSharedPlayerFactionFlags___PlayerFactionLoop_next
0x467FC4: cmp     edi, esi
0x467FC6: jz      short TESActorBaseData_SetSharedPlayerFactionFlags___SetFactionFlags
