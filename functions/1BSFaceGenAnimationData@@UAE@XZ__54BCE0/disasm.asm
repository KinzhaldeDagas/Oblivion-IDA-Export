0x54BCE0: push    0FFFFFFFFh
0x54BCE2: push    offset ??1BSFaceGenAnimationData@@UAE@XZ_SEH
0x54BCE7: mov     eax, large fs:0
0x54BCED: push    eax
0x54BCEE: push    ecx
0x54BCEF: push    esi
0x54BCF0: mov     eax, ds:0B30AACh
0x54BCF5: xor     eax, esp
0x54BCF7: push    eax
0x54BCF8: lea     eax, [esp+18h+var_C]
0x54BCFC: mov     large fs:0, eax
0x54BD02: mov     esi, ecx
0x54BD04: mov     [esp+18h+var_10], esi
0x54BD08: mov     dword ptr [esi], offset ??_7BSFaceGenAnimationData@@6B@; const BSFaceGenAnimationData::`vftable'
0x54BD0E: push    1
0x54BD10: push    1
0x54BD12: push    1
0x54BD14: push    1
0x54BD16: mov     [esp+28h+var_4], 13h
0x54BD1E: call    dword ptr ds:0A64300h
0x54BD24: mov     eax, [esi]
0x54BD26: mov     edx, [eax+0B8h]
0x54BD2C: push    1
0x54BD2E: push    1
0x54BD30: push    1
0x54BD32: push    1
0x54BD34: mov     ecx, esi
0x54BD36: call    edx
0x54BD38: lea     ecx, [esi+15Ch]; this
0x54BD3E: mov     byte ptr [esp+18h+var_4], 12h
0x54BD43: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BD48: lea     ecx, [esi+148h]; this
0x54BD4E: mov     byte ptr [esp+18h+var_4], 11h
0x54BD53: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BD58: lea     ecx, [esi+138h]
0x54BD5E: mov     byte ptr [esp+18h+var_4], 10h
0x54BD63: call    ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ; NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(void)
0x54BD68: lea     ecx, [esi+124h]; this
0x54BD6E: mov     byte ptr [esp+18h+var_4], 0Fh
0x54BD73: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BD78: lea     ecx, [esi+114h]
0x54BD7E: mov     byte ptr [esp+18h+var_4], 0Eh
0x54BD83: call    ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ; NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(void)
0x54BD88: lea     ecx, [esi+100h]; this
0x54BD8E: mov     byte ptr [esp+18h+var_4], 0Dh
0x54BD93: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BD98: lea     ecx, [esi+0ECh]; this
0x54BD9E: mov     byte ptr [esp+18h+var_4], 0Ch
0x54BDA3: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BDA8: lea     ecx, [esi+0DCh]
0x54BDAE: mov     byte ptr [esp+18h+var_4], 0Bh
0x54BDB3: call    ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ; NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(void)
0x54BDB8: lea     ecx, [esi+0C8h]; this
0x54BDBE: mov     byte ptr [esp+18h+var_4], 0Ah
0x54BDC3: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BDC8: lea     ecx, [esi+0B8h]
0x54BDCE: mov     byte ptr [esp+18h+var_4], 9
0x54BDD3: call    ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ; NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(void)
0x54BDD8: lea     ecx, [esi+0A4h]; this
0x54BDDE: mov     byte ptr [esp+18h+var_4], 8
0x54BDE3: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BDE8: lea     ecx, [esi+90h]; this
0x54BDEE: mov     byte ptr [esp+18h+var_4], 7
0x54BDF3: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BDF8: lea     ecx, [esi+80h]
0x54BDFE: mov     byte ptr [esp+18h+var_4], 6
0x54BE03: call    ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ; NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(void)
0x54BE08: lea     ecx, [esi+6Ch]; this
0x54BE0B: mov     byte ptr [esp+18h+var_4], 5
0x54BE10: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BE15: lea     ecx, [esi+5Ch]
0x54BE18: mov     byte ptr [esp+18h+var_4], 4
0x54BE1D: call    ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ; NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(void)
0x54BE22: mov     byte ptr [esp+18h+var_4], 3
0x54BE27: lea     ecx, [esi+48h]; this
0x54BE2A: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BE2F: lea     ecx, [esi+34h]; this
0x54BE32: mov     byte ptr [esp+18h+var_4], 2
0x54BE37: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BE3C: lea     ecx, [esi+24h]
0x54BE3F: mov     byte ptr [esp+18h+var_4], 1
0x54BE44: call    ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ; NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(void)
0x54BE49: lea     ecx, [esi+10h]; this
0x54BE4C: mov     byte ptr [esp+18h+var_4], 0
0x54BE51: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54BE56: mov     ecx, esi
0x54BE58: mov     [esp+18h+var_4], 0FFFFFFFFh
0x54BE60: call    NiExtraData_dtor
0x54BE65: mov     ecx, dword ptr [esp+18h+var_C]
0x54BE69: mov     large fs:0, ecx
0x54BE70: pop     ecx
0x54BE71: pop     esi
0x54BE72: add     esp, 10h
0x54BE75: retn
