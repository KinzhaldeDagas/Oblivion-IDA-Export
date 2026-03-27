0x54ABC0: push    0FFFFFFFFh
0x54ABC2: push    offset SEH_54ABC0
0x54ABC7: mov     eax, large fs:0
0x54ABCD: push    eax
0x54ABCE: sub     esp, 14h
0x54ABD1: push    esi
0x54ABD2: push    edi
0x54ABD3: mov     eax, ds:0B30AACh
0x54ABD8: xor     eax, esp
0x54ABDA: push    eax
0x54ABDB: lea     eax, [esp+2Ch+var_C]
0x54ABDF: mov     large fs:0, eax
0x54ABE5: mov     edi, ecx
0x54ABE7: push    1
0x54ABE9: push    3
0x54ABEB: lea     ecx, [esp+34h+var_20]
0x54ABEF: call    sub_54EA00
0x54ABF4: cmp     byte ptr [edi+1DAh], 0
0x54ABFB: mov     [esp+2Ch+var_4], 0
0x54AC03: jnz     short loc_54AC79
0x54AC05: mov     esi, [esp+2Ch+arg_0]
0x54AC09: test    esi, esi
0x54AC0B: jz      short loc_54AC79
0x54AC0D: fldz
0x54AC0F: fld     [esp+2Ch+arg_4]
0x54AC13: fcom    st(1)
0x54AC15: fnstsw  ax
0x54AC17: fstp    st(1)
0x54AC19: test    ah, 5
0x54AC1C: jnp     short loc_54AC77
0x54AC1E: push    ecx
0x54AC1F: lea     ecx, [esp+30h+var_20]
0x54AC23: fstp    [esp+30h+var_30]; float
0x54AC26: call    sub_54E580
0x54AC2B: fld     dword ptr [esi]
0x54AC2D: cmp     [esp+2Ch+var_10], 0
0x54AC32: fstp    [esp+2Ch+arg_0]
0x54AC36: jbe     short loc_54AC65
0x54AC38: mov     ecx, [esp+2Ch+var_14]
0x54AC3C: fld     dword ptr [ecx]
0x54AC3E: fld     [esp+2Ch+arg_0]
0x54AC42: fld     st
0x54AC44: fucomp  st(2)
0x54AC46: fnstsw  ax
0x54AC48: fstp    st(1)
0x54AC4A: test    ah, 44h
0x54AC4D: jnp     short loc_54AC63
0x54AC4F: add     edi, 114h
0x54AC55: fstp    dword ptr [ecx]
0x54AC57: push    edi
0x54AC58: lea     ecx, [esp+30h+var_20]
0x54AC5C: call    sub_54F350
0x54AC61: jmp     short loc_54AC79
0x54AC63: fstp    st
0x54AC65: add     edi, 114h
0x54AC6B: push    edi
0x54AC6C: lea     ecx, [esp+30h+var_20]
0x54AC70: call    sub_54F350
0x54AC75: jmp     short loc_54AC79
0x54AC77: fstp    st
0x54AC79: lea     ecx, [esp+2Ch+var_20]; this
0x54AC7D: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x54AC85: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54AC8A: mov     ecx, [esp+2Ch+var_C]
0x54AC8E: mov     large fs:0, ecx
0x54AC95: pop     ecx
0x54AC96: pop     edi
0x54AC97: pop     esi
0x54AC98: add     esp, 20h
0x54AC9B: retn    8
