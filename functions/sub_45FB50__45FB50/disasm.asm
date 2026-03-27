0x45FB50: push    ecx
0x45FB51: push    ebp
0x45FB52: push    esi; ArgList
0x45FB53: mov     esi, ecx
0x45FB55: mov     ecx, offset ActorProcessManager_ptr
0x45FB5A: call    sub_679480
0x45FB5F: mov     ecx, [esi+18h]
0x45FB62: mov     ebp, [esp+0Ch+arg_0]
0x45FB66: shr     ecx, 9
0x45FB69: test    cl, 1
0x45FB6C: mov     [esp+0Ch+var_4], eax
0x45FB70: jz      short loc_45FB7B
0x45FB72: add     dword ptr [esi+90h], 4
0x45FB79: jmp     short loc_45FB9E
0x45FB7B: mov     ecx, [ebp+8]
0x45FB7E: push    1
0x45FB80: lea     edx, [esp+10h+arg_0]
0x45FB84: push    edx
0x45FB85: push    4
0x45FB87: lea     eax, [esp+18h+var_4]
0x45FB8B: push    eax
0x45FB8C: push    ebp
0x45FB8D: mov     [esp+20h+arg_0], 1
0x45FB95: call    ecx
0x45FB97: mov     eax, [esp+20h+var_4]
0x45FB9B: add     esp, 14h
0x45FB9E: test    eax, eax
0x45FBA0: jz      loc_45FC4D
0x45FBA6: mov     ecx, [esi+40h]
0x45FBA9: test    ecx, ecx
0x45FBAB: jz      short loc_45FBBC
0x45FBAD: push    offset aTempEffectsLis; "Temp Effects List"
0x45FBB2: push    eax
0x45FBB3: call    sub_4531B0
0x45FBB8: mov     eax, [esp+0Ch+var_4]
0x45FBBC: push    1
0x45FBBE: push    eax
0x45FBBF: mov     ecx, offset FormHeap
0x45FBC4: call    j_MemoryHeap_Alloc
0x45FBC9: test    eax, eax
0x45FBCB: mov     [esi+14h], eax
0x45FBCE: jnz     short loc_45FBDD
0x45FBD0: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x45FBD5: call    sub_404EC0
0x45FBDA: add     esp, 4
0x45FBDD: push    edi
0x45FBDE: mov     edi, [esi+14h]
0x45FBE1: mov     ecx, offset ActorProcessManager_ptr
0x45FBE6: call    sub_679630
0x45FBEB: mov     eax, [esp+10h+var_4]
0x45FBEF: lea     edx, [edi+eax]
0x45FBF2: cmp     edx, [esi+14h]
0x45FBF5: jz      short loc_45FC0D
0x45FBF7: mov     ecx, ds:0B34D90h
0x45FBFD: mov     eax, [ecx]
0x45FBFF: mov     edx, [eax+18h]
0x45FC02: push    offset aSavetempeffect; "SaveTempEffectsList() call did not prop"...
0x45FC07: call    edx
0x45FC09: mov     eax, [esp+10h+var_4]
0x45FC0D: mov     ecx, [esi+18h]
0x45FC10: shr     ecx, 9
0x45FC13: test    cl, 1
0x45FC16: jz      short loc_45FC20
0x45FC18: add     [esi+90h], eax
0x45FC1E: jmp     short loc_45FC3A
0x45FC20: push    1
0x45FC22: lea     edx, [esp+14h+arg_0]
0x45FC26: push    edx
0x45FC27: push    eax
0x45FC28: mov     eax, [ebp+8]
0x45FC2B: push    edi
0x45FC2C: push    ebp
0x45FC2D: mov     [esp+24h+arg_0], 1
0x45FC35: call    eax
0x45FC37: add     esp, 14h
0x45FC3A: push    edi; void *
0x45FC3B: mov     ecx, offset FormHeap
0x45FC40: call    MemoryHeap_Free_checked
0x45FC45: mov     dword ptr [esi+14h], 0
0x45FC4C: pop     edi
0x45FC4D: pop     esi
0x45FC4E: pop     ebp
0x45FC4F: pop     ecx
0x45FC50: retn    4
