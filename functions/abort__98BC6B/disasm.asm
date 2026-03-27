0x98BC6B: push    ebp
0x98BC6C: lea     ebp, [esp-2A8h]
0x98BC73: sub     esp, 328h
0x98BC79: mov     eax, ___security_cookie
0x98BC7E: xor     eax, ebp
0x98BC80: mov     [ebp+2A8h+var_4], eax
0x98BC86: test    byte ptr dword_B310A8, 1
0x98BC8D: push    esi
0x98BC8E: jz      short loc_98BC98
0x98BC90: push    0Ah
0x98BC92: call    __NMSG_WRITE
0x98BC97: pop     ecx
0x98BC98: call    sub_98DACB
0x98BC9D: test    eax, eax
0x98BC9F: jz      short loc_98BCA9
0x98BCA1: push    16h; int
0x98BCA3: call    _raise
0x98BCA8: pop     ecx
0x98BCA9: test    byte ptr dword_B310A8, 2
0x98BCB0: jz      loc_98BD56
0x98BCB6: mov     [ebp+2A8h+var_220], eax
0x98BCBC: mov     [ebp+2A8h+var_224], ecx
0x98BCC2: mov     [ebp+2A8h+var_228], edx
0x98BCC8: mov     [ebp+2A8h+var_22C], ebx
0x98BCCB: mov     [ebp+2A8h+var_230], esi
0x98BCCE: mov     [ebp+2A8h+var_234], edi
0x98BCD1: mov     [ebp+2A8h+var_208], ss
0x98BCD8: mov     [ebp+2A8h+var_214], cs
0x98BCDF: mov     [ebp+2A8h+var_238], ds
0x98BCE3: mov     [ebp+2A8h+var_23C], es
0x98BCE7: mov     [ebp+2A8h+var_240], fs
0x98BCEB: mov     [ebp+2A8h+var_244], gs
0x98BCEF: pushf
0x98BCF0: pop     [ebp+2A8h+var_210]
0x98BCF6: mov     esi, [ebp+2ACh]
0x98BCFC: lea     eax, [ebp+2ACh]
0x98BD02: mov     [ebp+2A8h+var_20C], eax
0x98BD08: mov     [ebp+2A8h+var_2D0], 10001h
0x98BD0F: mov     [ebp+2A8h+var_218], esi
0x98BD15: mov     eax, [eax-4]
0x98BD18: push    50h ; 'P'
0x98BD1A: mov     [ebp+2A8h+var_21C], eax
0x98BD20: lea     eax, [ebp+2A8h+var_328]
0x98BD23: push    0
0x98BD25: push    eax
0x98BD26: call    __memset
0x98BD2B: lea     eax, [ebp+2A8h+var_328]
0x98BD2E: add     esp, 0Ch
0x98BD31: mov     [ebp+2A8h+ExceptionInfo.ExceptionRecord], eax
0x98BD34: lea     eax, [ebp+2A8h+var_2D0]
0x98BD37: push    0; lpTopLevelExceptionFilter
0x98BD39: mov     [ebp+2A8h+var_328], 40000015h
0x98BD40: mov     [ebp+2A8h+var_31C], esi
0x98BD43: mov     [ebp+2A8h+ExceptionInfo.ContextRecord], eax
0x98BD46: call    ds:SetUnhandledExceptionFilter
0x98BD4C: lea     eax, [ebp+2A8h+ExceptionInfo]
0x98BD4F: push    eax; ExceptionInfo
0x98BD50: call    ds:UnhandledExceptionFilter
0x98BD56: push    3; Code
0x98BD58: call    __exit
