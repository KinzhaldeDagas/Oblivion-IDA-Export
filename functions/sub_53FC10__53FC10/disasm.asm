0x53FC10: push    ecx; Exterior fog day/night helper: computes adjusted sunrise blend start from climate sunrise minus transition padding.
0x53FC11: push    esi
0x53FC12: mov     esi, ecx
0x53FC14: mov     eax, [esi+0FCh]
0x53FC1A: test    eax, 1000h
0x53FC1F: jz      short loc_53FC87; Fog time-boundary decode: adjusted sunrise helper refreshes only when Flags0FC bit 0x1000 marks blend-start dirty.
0x53FC21: test    eax, 100h
0x53FC26: jz      short loc_53FC51
0x53FC28: mov     eax, [esi+0Ch]
0x53FC2B: test    eax, eax
0x53FC2D: jz      short loc_53FC51
0x53FC2F: movzx   eax, byte ptr [eax+50h]
0x53FC33: mov     [esp+8+var_4], eax
0x53FC37: fild    [esp+8+var_4]
0x53FC3B: fdiv    qword ptr ds:0A3F3A0h
0x53FC41: fstp    dword ptr ds:0B35238h
0x53FC47: and     dword ptr [esi+0FCh], 0FFFFFEFFh
0x53FC51: fld     dword ptr ds:0B35238h
0x53FC57: fsub    dword ptr ds:0B36668h; Fog time-boundary decode: candidate adjusted sunrise = cached sunrise - transition padding unk_B36668.
0x53FC5D: fldz
0x53FC5F: fcom    st(1)
0x53FC61: fnstsw  ax
0x53FC63: fstp    st(1)
0x53FC65: test    ah, 41h
0x53FC68: jz      short loc_53FC77
0x53FC6A: fstp    st
0x53FC6C: call    sub_499140; Exterior fog day/night helper: climate sunrise boundary byte (+0x50) cached as normalized time for weather fog interpolation.
0x53FC71: fsub    dword ptr ds:0B36668h; Fog time-boundary decode: adjusted sunrise uses sub_499140() - unk_B36668 when nonnegative; otherwise clamps to 0.
0x53FC77: fstp    dword ptr ds:0B36674h; Fog time-boundary decode: stores adjusted sunrise blend-start in unk_B36674 for 0x5418F0/0x541DD0 interpolation.
0x53FC7D: and     dword ptr [esi+0FCh], 0FFFFEFFFh; Fog time-boundary decode: clears adjusted-sunrise dirty bit after updating unk_B36674.
0x53FC87: fld     dword ptr ds:0B36674h
0x53FC8D: pop     esi
0x53FC8E: pop     ecx
0x53FC8F: retn
