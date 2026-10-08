0x68CD90: push    0FFFFFFFFh
0x68CD92: push    offset ??1AbsorbEffect@@UAE@XZ_SEH
0x68CD97: mov     eax, large fs:0
0x68CD9D: push    eax
0x68CD9E: push    ecx
0x68CD9F: push    ebx
0x68CDA0: push    ebp
0x68CDA1: push    esi
0x68CDA2: push    edi
0x68CDA3: mov     eax, ds:0B30AACh
0x68CDA8: xor     eax, esp
0x68CDAA: push    eax
0x68CDAB: lea     eax, [esp+24h+var_C]
0x68CDAF: mov     large fs:0, eax
0x9C5430: mov     ecx, [ebp-10h]; this
0x9C5433: jmp     j_??1VampirismEffect@@UAE@XZ; VampirismEffect::~VampirismEffect(void)
0x9C5438: mov     ecx, [ebp-10h]
0x9C543B: add     ecx, 3Ch ; '<'; slot
0x9C543E: jmp     NiPointerSlot_Release
0x9C5443: mov     ecx, [ebp-10h]
0x9C5446: add     ecx, 40h ; '@'; slot
0x9C5449: jmp     NiPointerSlot_Release
0x9C544E: mov     ecx, [ebp-10h]
0x9C5451: add     ecx, 44h ; 'D'; slot
0x9C5454: jmp     NiPointerSlot_Release
0x9C5459: mov     ecx, [ebp-10h]
0x9C545C: add     ecx, 48h ; 'H'; slot
0x9C545F: jmp     NiPointerSlot_Release
0x9C5464: mov     edx, [esp+arg_4]
0x9C5468: lea     eax, [edx-14h]
0x9C546B: mov     ecx, [edx-18h]
0x9C546E: xor     ecx, eax
0x9C5470: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5475: mov     eax, offset stru_AEDC08
0x9C547A: jmp     ___CxxFrameHandler3
