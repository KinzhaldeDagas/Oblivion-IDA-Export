0x550010: sub     esp, 20Ch
0x550016: mov     eax, ds:0B30AACh
0x55001B: xor     eax, esp
0x55001D: mov     [esp+20Ch+var_4], eax
0x550024: mov     eax, [esp+20Ch+arg_4]
0x55002B: test    eax, eax
0x55002D: push    esi
0x55002E: mov     esi, [esp+210h+arg_0]
0x550035: jnz     short loc_55004F
0x550037: xor     eax, eax
0x550039: pop     esi
0x55003A: mov     ecx, [esp+20Ch+var_4]
0x550041: xor     ecx, esp
0x550043: call    @__security_check_cookie@4; __security_check_cookie(x)
0x550048: add     esp, 20Ch
0x55004E: retn
0x55004F: lea     edx, [esp+210h+Str]
0x550053: sub     edx, eax
0x550055: mov     cl, [eax]
0x550057: mov     [edx+eax], cl
0x55005A: add     eax, 1
0x55005D: test    cl, cl
0x55005F: jnz     short loc_550055
0x550061: lea     eax, [esp+210h+Str]
0x550065: push    2Eh ; '.'; Ch
0x550067: push    eax; Str
0x550068: call    _strrchr
0x55006D: add     esp, 8
0x550070: test    eax, eax
0x550072: jz      short loc_550037
0x550074: lea     ecx, [esp+210h+Str]
0x550078: push    ecx
0x550079: lea     edx, [esp+214h+a2]
0x550080: push    offset aS_tri; "%s.tri"
0x550085: push    edx
0x550086: mov     byte ptr [eax], 0
0x550089: call    __sprintf
0x55008E: add     esp, 0Ch
0x550091: push    0; a3
0x550093: lea     eax, [esp+214h+a2]
0x55009A: push    eax; a2
0x55009B: mov     ecx, esi; this
0x55009D: call    BSStringT_Set
0x5500A2: mov     eax, [esi]
0x5500A4: mov     ecx, [esp+210h+var_4]
0x5500AB: pop     esi
0x5500AC: xor     ecx, esp
0x5500AE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5500B3: add     esp, 20Ch
0x5500B9: retn
