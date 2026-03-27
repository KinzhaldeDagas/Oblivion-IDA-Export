0x54EA00: push    0FFFFFFFFh
0x54EA02: push    offset SEH_54EA00
0x54EA07: mov     eax, large fs:0
0x54EA0D: push    eax
0x54EA0E: push    ecx
0x54EA0F: push    esi
0x54EA10: mov     eax, ds:0B30AACh
0x54EA15: xor     eax, esp
0x54EA17: push    eax
0x54EA18: lea     eax, [esp+18h+var_C]
0x54EA1C: mov     large fs:0, eax
0x54EA22: mov     esi, ecx
0x54EA24: mov     [esp+18h+var_10], esi
0x54EA28: fldz
0x54EA2A: mov     eax, [esp+18h+arg_0]
0x54EA2E: fstp    dword ptr [esi+8]
0x54EA31: mov     [esi+4], eax
0x54EA34: mov     ecx, [esp+18h+arg_4]
0x54EA38: xor     eax, eax
0x54EA3A: push    1
0x54EA3C: push    ecx
0x54EA3D: mov     ecx, esi
0x54EA3F: mov     [esp+20h+var_4], eax
0x54EA43: mov     dword ptr [esi], offset ??_7BSFaceGenKeyframeMultiple@@6B@; const BSFaceGenKeyframeMultiple::`vftable'
0x54EA49: mov     [esi+0Ch], eax
0x54EA4C: mov     [esi+10h], eax
0x54EA4F: call    sub_54E860
0x54EA54: mov     eax, esi
0x54EA56: mov     ecx, [esp+18h+var_C]
0x54EA5A: mov     large fs:0, ecx
0x54EA61: pop     ecx
0x54EA62: pop     esi
0x54EA63: add     esp, 10h
0x54EA66: retn    8
