0x72BD10: push    0FFFFFFFFh
0x72BD12: push    offset SEH_8C8970
0x72BD17: mov     eax, large fs:0
0x72BD1D: push    eax
0x72BD1E: push    ecx
0x72BD1F: push    esi
0x72BD20: push    edi
0x72BD21: mov     eax, ds:0B30AACh
0x72BD26: xor     eax, esp
0x72BD28: push    eax
0x72BD29: lea     eax, [esp+1Ch+var_C]
0x72BD2D: mov     large fs:0, eax
0x72BD33: push    2Ch ; ','; Size
0x72BD35: call    FormHeapAlloc
0x72BD3A: mov     esi, eax
0x72BD3C: add     esp, 4
0x72BD3F: mov     [esp+1Ch+var_10], esi
0x72BD43: xor     edi, edi
0x72BD45: cmp     esi, edi
0x72BD47: mov     [esp+1Ch+var_4], edi
0x72BD4B: jz      short loc_72BD8D
0x72BD4D: mov     ecx, esi
0x72BD4F: call    NiObject_constr
0x72BD54: mov     dword ptr [esi], offset ??_7NiSkinInstance@@6B@; const NiSkinInstance::`vftable'
0x72BD5A: mov     [esi+8], edi
0x72BD5D: mov     [esi+0Ch], edi
0x72BD60: mov     [esi+10h], edi
0x72BD63: mov     [esi+14h], edi
0x72BD66: mov     dword ptr [esi+18h], 0FFFFFFFFh
0x72BD6D: mov     [esi+1Ch], edi
0x72BD70: mov     [esi+20h], edi
0x72BD73: mov     [esi+24h], edi
0x72BD76: mov     [esi+28h], edi
0x72BD79: mov     eax, esi
0x72BD7B: mov     ecx, [esp+1Ch+var_C]
0x72BD7F: mov     large fs:0, ecx
0x72BD86: pop     ecx
0x72BD87: pop     edi
0x72BD88: pop     esi
0x72BD89: add     esp, 10h
0x72BD8C: retn
0x72BD8D: xor     eax, eax
0x72BD8F: mov     ecx, [esp+1Ch+var_C]
0x72BD93: mov     large fs:0, ecx
0x72BD9A: pop     ecx
0x72BD9B: pop     edi
0x72BD9C: pop     esi
0x72BD9D: add     esp, 10h
0x72BDA0: retn
