0x571C50: push    0FFFFFFFFh
0x571C52: push    offset SEH_571C50
0x571C57: mov     eax, large fs:0
0x571C5D: push    eax
0x571C5E: push    ecx
0x571C5F: push    esi
0x571C60: mov     eax, ds:0B30AACh
0x571C65: xor     eax, esp
0x571C67: push    eax
0x571C68: lea     eax, [esp+18h+var_C]
0x571C6C: mov     large fs:0, eax
0x571C72: mov     esi, ecx
0x571C74: mov     [esp+18h+var_10], esi
0x571C78: call    sub_721350
0x571C7D: xor     eax, eax
0x571C7F: lea     ecx, [esi+10h]; this
0x571C82: mov     dword ptr [esi], offset ??_7DebugTextExtraData@@6B@; const DebugTextExtraData::`vftable'
0x571C88: mov     [esp+18h+var_4], eax
0x571C8C: mov     [ecx], eax
0x571C8E: mov     [ecx+4], ax
0x571C92: mov     [ecx+6], ax
0x571C96: mov     edx, [esp+18h+arg_0]
0x571C9A: push    eax; a3
0x571C9B: mov     eax, [esp+1Ch+a2]
0x571C9F: push    eax; a2
0x571CA0: mov     byte ptr [esp+20h+var_4], 1
0x571CA5: mov     [esi+0Ch], edx
0x571CA8: call    BSStringT_Set
0x571CAD: mov     ecx, [esp+18h+arg_8]
0x571CB1: mov     edx, [esp+18h+arg_C]
0x571CB5: mov     [esi+18h], ecx
0x571CB8: mov     [esi+1Ch], edx
0x571CBB: mov     eax, esi
0x571CBD: mov     ecx, [esp+18h+var_C]
0x571CC1: mov     large fs:0, ecx
0x571CC8: pop     ecx
0x571CC9: pop     esi
0x571CCA: add     esp, 10h
0x571CCD: retn    10h
