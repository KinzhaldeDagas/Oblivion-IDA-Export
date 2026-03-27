0x4CCE20: sub     esp, 34h
0x4CCE23: cmp     byte ptr [esp+34h+arg_8], 0
0x4CCE28: jz      short loc_4CCE32
0x4CCE2A: fld     dword ptr ds:0A30634h
0x4CCE30: jmp     short loc_4CCE34
0x4CCE32: fld1
0x4CCE34: test    byte ptr [ecx+24h], 1
0x4CCE38: fstp    [esp+34h+arg_8]
0x4CCE3C: fldz
0x4CCE3E: fstp    [esp+34h+var_34]
0x4CCE41: jz      short loc_4CCE4E
0x4CCE43: add     ecx, 28h ; '('
0x4CCE46: call    sub_420C40
0x4CCE4B: fstp    [esp+34h+var_34]
0x4CCE4E: fld     [esp+34h+arg_8]
0x4CCE52: fmul    [esp+34h+var_34]
0x4CCE55: fstp    [esp+34h+arg_8]
0x4CCE59: fldz
0x4CCE5B: fld     [esp+34h+arg_8]
0x4CCE5F: fucom   st(1)
0x4CCE61: fnstsw  ax
0x4CCE63: fstp    st(1)
0x4CCE65: test    ah, 44h
0x4CCE68: jnp     short loc_4CCEA4
0x4CCE6A: push    esi
0x4CCE6B: push    edi
0x4CCE6C: mov     ecx, 9
0x4CCE71: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4CCE76: lea     edi, [esp+3Ch+var_24]
0x4CCE7A: rep movsd
0x4CCE7C: push    ecx
0x4CCE7D: lea     ecx, [esp+40h+var_24]
0x4CCE81: fstp    [esp+40h+var_40]; float
0x4CCE84: call    NiMatrix33_InitRotationTransform
0x4CCE89: mov     ecx, [esp+3Ch+arg_0]
0x4CCE8D: lea     eax, [esp+3Ch+var_24]
0x4CCE91: push    eax
0x4CCE92: push    ecx
0x4CCE93: lea     edx, [esp+44h+var_30]
0x4CCE97: push    edx
0x4CCE98: call    sub_710250
0x4CCE9D: add     esp, 0Ch
0x4CCEA0: pop     edi
0x4CCEA1: pop     esi
0x4CCEA2: jmp     short loc_4CCEAA
0x4CCEA4: mov     eax, [esp+34h+arg_0]
0x4CCEA8: fstp    st
0x4CCEAA: mov     edx, [eax]
0x4CCEAC: mov     ecx, [esp+34h+arg_4]
0x4CCEB0: mov     [ecx], edx
0x4CCEB2: mov     edx, [eax+4]
0x4CCEB5: mov     [ecx+4], edx
0x4CCEB8: mov     eax, [eax+8]
0x4CCEBB: mov     [ecx+8], eax
0x4CCEBE: add     esp, 34h
0x4CCEC1: retn    0Ch
