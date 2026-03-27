0x68FAF0: push    0FFFFFFFFh
0x68FAF2: push    offset SEH_68FAF0
0x68FAF7: mov     eax, large fs:0
0x68FAFD: push    eax
0x68FAFE: push    ecx
0x68FAFF: push    ebp
0x68FB00: push    esi
0x68FB01: push    edi
0x68FB02: mov     eax, ds:0B30AACh
0x68FB07: xor     eax, esp
0x68FB09: push    eax
0x68FB0A: lea     eax, [esp+20h+var_C]
0x68FB0E: mov     large fs:0, eax
0x68FB14: mov     esi, ecx
0x68FB16: mov     [esp+20h+var_10], esi
0x68FB1A: lea     edi, [esi+4]
0x68FB1D: mov     [esp+20h+var_4], 0
0x68FB25: mov     dword ptr [edi], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x68FB2B: lea     ebp, [esi+8]
0x68FB2E: mov     dword ptr [ebp+0], offset ??_7hkEntityActivationListener@@6B@; const hkEntityActivationListener::`vftable'
0x68FB35: mov     eax, [esp+20h+arg_0]
0x68FB39: mov     ecx, [esp+20h+arg_8]
0x68FB3D: mov     dword ptr [esi], offset ??_7bhkTelekinesisListener@@6BbhkTelekinesisListener@@@; const bhkTelekinesisListener::`vftable'{for `bhkTelekinesisListener'}
0x68FB43: mov     dword ptr [edi], offset ??_7bhkTelekinesisListener@@6BhkEntityListener@@@; const bhkTelekinesisListener::`vftable'{for `hkEntityListener'}
0x68FB49: mov     dword ptr [ebp+0], offset ??_7bhkTelekinesisListener@@6BhkEntityActivationListener@@@; const bhkTelekinesisListener::`vftable'{for `hkEntityActivationListener'}
0x68FB50: mov     dword ptr [esi+14h], 0
0x68FB57: mov     [esi+0Ch], eax
0x68FB5A: mov     eax, [esp+20h+arg_4]
0x68FB5E: test    eax, eax
0x68FB60: mov     byte ptr [esp+20h+var_4], 2
0x68FB65: mov     [esi+10h], eax
0x68FB68: mov     [esi+14h], ecx
0x68FB6B: mov     byte ptr [esi+18h], 0
0x68FB6F: jz      short loc_68FB80
0x68FB71: mov     eax, [eax+8]
0x68FB74: test    eax, eax
0x68FB76: jz      short loc_68FB80
0x68FB78: push    esi
0x68FB79: mov     ecx, eax
0x68FB7B: call    sub_8A6630
0x68FB80: mov     eax, [esi+10h]
0x68FB83: test    eax, eax
0x68FB85: jz      short loc_68FB96
0x68FB87: mov     eax, [eax+8]
0x68FB8A: test    eax, eax
0x68FB8C: jz      short loc_68FB96
0x68FB8E: push    edi
0x68FB8F: mov     ecx, eax
0x68FB91: call    sub_8A6550
0x68FB96: mov     eax, [esi+10h]
0x68FB99: test    eax, eax
0x68FB9B: jz      short loc_68FBAA
0x68FB9D: mov     ecx, [eax+8]
0x68FBA0: test    ecx, ecx
0x68FBA2: jz      short loc_68FBAA
0x68FBA4: push    ebp
0x68FBA5: call    sub_8A65C0
0x68FBAA: mov     eax, esi
0x68FBAC: mov     ecx, [esp+20h+var_C]
0x68FBB0: mov     large fs:0, ecx
0x68FBB7: pop     ecx
0x68FBB8: pop     edi
0x68FBB9: pop     esi
0x68FBBA: pop     ebp
0x68FBBB: add     esp, 10h
0x68FBBE: retn    0Ch
