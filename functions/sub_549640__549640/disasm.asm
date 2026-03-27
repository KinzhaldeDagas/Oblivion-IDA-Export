0x549640: push    0FFFFFFFFh
0x549642: push    offset SEH_549640
0x549647: mov     eax, large fs:0
0x54964D: push    eax
0x54964E: sub     esp, 28h
0x549651: push    esi
0x549652: mov     eax, ds:0B30AACh
0x549657: xor     eax, esp
0x549659: push    eax
0x54965A: lea     eax, [esp+3Ch+var_C]
0x54965E: mov     large fs:0, eax
0x549664: mov     esi, ecx
0x549666: cmp     byte ptr [esi+1DAh], 0
0x54966D: jnz     loc_549738
0x549673: mov     eax, [esp+3Ch+arg_0]
0x549677: sub     eax, 0
0x54967A: jz      short loc_5496F1
0x54967C: sub     eax, 2
0x54967F: jz      short loc_5496C6
0x549681: sub     eax, 1
0x549684: jnz     loc_549738
0x54968A: push    1
0x54968C: push    3
0x54968E: lea     ecx, [esp+44h+var_34]
0x549692: call    sub_54EA00
0x549697: fld     [esp+3Ch+arg_4]
0x54969B: push    ecx
0x54969C: lea     ecx, [esp+40h+var_34]
0x5496A0: fstp    [esp+40h+var_40]; float
0x5496A3: mov     [esp+40h+var_4], 2
0x5496AB: call    sub_54E580
0x5496B0: add     esi, 114h
0x5496B6: push    esi
0x5496B7: lea     ecx, [esp+40h+var_34]
0x5496BB: call    sub_54F350
0x5496C0: lea     ecx, [esp+3Ch+var_34]
0x5496C4: jmp     short loc_54972B
0x5496C6: push    11h
0x5496C8: push    2
0x5496CA: lea     ecx, [esp+44h+var_20]
0x5496CE: call    sub_54EA00
0x5496D3: fld     [esp+3Ch+arg_4]
0x5496D7: push    ecx
0x5496D8: lea     ecx, [esp+40h+var_20]
0x5496DC: fstp    [esp+40h+var_40]; float
0x5496DF: mov     [esp+40h+var_4], 1
0x5496E7: call    sub_54E580
0x5496EC: add     esi, 5Ch ; '\'
0x5496EF: jmp     short loc_54971D
0x5496F1: push    10h
0x5496F3: push    0
0x5496F5: lea     ecx, [esp+44h+var_20]
0x5496F9: call    sub_54EA00
0x5496FE: fld     [esp+3Ch+arg_4]
0x549702: push    ecx
0x549703: lea     ecx, [esp+40h+var_20]
0x549707: fstp    [esp+40h+var_40]; float
0x54970A: mov     [esp+40h+var_4], 0
0x549712: call    sub_54E580
0x549717: add     esi, 0B8h ; '¸'
0x54971D: push    esi
0x54971E: lea     ecx, [esp+40h+var_20]
0x549722: call    sub_54F350
0x549727: lea     ecx, [esp+3Ch+var_20]; this
0x54972B: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x549733: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x549738: mov     ecx, [esp+3Ch+var_C]
0x54973C: mov     large fs:0, ecx
0x549743: pop     ecx
0x549744: pop     esi
0x549745: add     esp, 34h
0x549748: retn    0Ch
