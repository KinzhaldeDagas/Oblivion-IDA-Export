0x74DDE0: push    ebx
0x74DDE1: push    esi
0x74DDE2: push    edi
0x74DDE3: push    28h ; '('; Size
0x74DDE5: mov     ebx, ecx
0x74DDE7: call    FormHeapAlloc
0x74DDEC: mov     esi, eax
0x74DDEE: xor     edi, edi
0x74DDF0: add     esp, 4
0x74DDF3: cmp     esi, edi
0x74DDF5: jz      short loc_74DE35
0x74DDF7: mov     ecx, esi
0x74DDF9: call    sub_752BF0
0x74DDFE: mov     eax, [esp+0Ch+arg_0]
0x74DE02: mov     dword ptr [esi], offset ??_7NiPSysMeshUpdateModifier@@6B@; const NiPSysMeshUpdateModifier::`vftable'
0x74DE08: push    eax
0x74DE09: push    esi
0x74DE0A: mov     ecx, ebx
0x74DE0C: mov     dword ptr [esi+18h], offset ??_7?$NiTArray@V?$NiPointer@VNiAVObject@@@@@@6B@; const NiTArray<NiPointer<NiAVObject>>::`vftable'
0x74DE13: mov     [esi+20h], di
0x74DE17: mov     word ptr [esi+26h], 1
0x74DE1D: mov     [esi+22h], di
0x74DE21: mov     [esi+24h], di
0x74DE25: mov     [esi+1Ch], edi
0x74DE28: call    sub_74DB50
0x74DE2D: pop     edi
0x74DE2E: mov     eax, esi
0x74DE30: pop     esi
0x74DE31: pop     ebx
0x74DE32: retn    4
0x74DE35: mov     eax, [esp+0Ch+arg_0]
0x74DE39: push    eax
0x74DE3A: xor     esi, esi
0x74DE3C: push    esi
0x74DE3D: mov     ecx, ebx
0x74DE3F: call    sub_74DB50
0x74DE44: pop     edi
0x74DE45: mov     eax, esi
0x74DE47: pop     esi
0x74DE48: pop     ebx
0x74DE49: retn    4
