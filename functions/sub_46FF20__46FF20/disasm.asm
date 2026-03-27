0x46FF20: sub     esp, 20Ch
0x46FF26: mov     eax, ds:0B30AACh
0x46FF2B: xor     eax, esp
0x46FF2D: mov     [esp+20Ch+var_4], eax
0x46FF34: mov     eax, [esp+20Ch+arg_4]
0x46FF3B: test    eax, eax
0x46FF3D: push    esi
0x46FF3E: mov     esi, [esp+210h+arg_0]
0x46FF45: jnz     short loc_46FF5F
0x46FF47: xor     eax, eax
0x46FF49: pop     esi
0x46FF4A: mov     ecx, [esp+20Ch+var_4]
0x46FF51: xor     ecx, esp
0x46FF53: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46FF58: add     esp, 20Ch
0x46FF5E: retn
0x46FF5F: lea     edx, [esp+210h+Str]
0x46FF63: sub     edx, eax
0x46FF65: mov     cl, [eax]
0x46FF67: mov     [edx+eax], cl
0x46FF6A: add     eax, 1
0x46FF6D: test    cl, cl
0x46FF6F: jnz     short loc_46FF65
0x46FF71: lea     eax, [esp+210h+Str]
0x46FF75: push    2Eh ; '.'; Ch
0x46FF77: push    eax; Str
0x46FF78: call    _strrchr
0x46FF7D: add     esp, 8
0x46FF80: test    eax, eax
0x46FF82: jz      short loc_46FF47
0x46FF84: lea     ecx, [esp+210h+Str]
0x46FF88: push    ecx
0x46FF89: lea     edx, [esp+214h+a2]
0x46FF90: push    offset aS_n_dds; "%s_n.dds"
0x46FF95: push    edx
0x46FF96: mov     byte ptr [eax], 0
0x46FF99: call    __sprintf
0x46FF9E: add     esp, 0Ch
0x46FFA1: push    0; a3
0x46FFA3: lea     eax, [esp+214h+a2]
0x46FFAA: push    eax; a2
0x46FFAB: mov     ecx, esi; this
0x46FFAD: call    BSStringT_Set
0x46FFB2: mov     eax, [esi]
0x46FFB4: mov     ecx, [esp+210h+var_4]
0x46FFBB: pop     esi
0x46FFBC: xor     ecx, esp
0x46FFBE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x46FFC3: add     esp, 20Ch
0x46FFC9: retn
