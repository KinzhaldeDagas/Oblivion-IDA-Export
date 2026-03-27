0x537E40: push    0FFFFFFFFh
0x537E42: push    offset SEH_537E40
0x537E47: mov     eax, large fs:0
0x537E4D: push    eax
0x537E4E: push    ecx
0x537E4F: push    esi
0x537E50: mov     eax, ds:0B30AACh
0x537E55: xor     eax, esp
0x537E57: push    eax
0x537E58: lea     eax, [esp+18h+var_C]
0x537E5C: mov     large fs:0, eax
0x537E62: mov     esi, ecx
0x537E64: mov     [esp+18h+var_10], esi
0x537E68: call    sub_8B2170
0x537E6D: fld1
0x537E6F: push    4; Size
0x537E71: fstp    dword ptr [esi+14h]
0x537E74: mov     [esp+1Ch+var_4], 0
0x537E7C: mov     dword ptr [esi], offset ??_7TESWaterListener@@6B@; const TESWaterListener::`vftable'
0x537E82: mov     dword ptr [esi+20h], 1
0x537E89: call    FormHeapAlloc
0x537E8E: fld     [esp+1Ch+arg_0]
0x537E92: fmul    qword ptr ds:0A39088h
0x537E98: mov     [esi+18h], eax
0x537E9B: add     esp, 4
0x537E9E: fstp    dword ptr [eax]
0x537EA0: mov     dword ptr [esi+24h], 0
0x537EA7: mov     dword ptr [esi+28h], 0
0x537EAE: mov     eax, esi
0x537EB0: mov     ecx, [esp+18h+var_C]
0x537EB4: mov     large fs:0, ecx
0x537EBB: pop     ecx
0x537EBC: pop     esi
0x537EBD: add     esp, 10h
0x537EC0: retn    4
