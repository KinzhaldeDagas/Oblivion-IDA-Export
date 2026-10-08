0x534340: push    0FFFFFFFFh
0x534342: push    offset SEH_534340
0x534347: mov     eax, large fs:0
0x53434D: push    eax
0x53434E: push    ecx
0x53434F: mov     eax, ds:0B30AACh
0x534354: xor     eax, esp
0x534356: push    eax
0x534357: lea     eax, [esp+14h+var_C]
0x53435B: mov     large fs:0, eax
0x534361: mov     ecx, ds:0BA7D98h
0x534367: mov     eax, [ecx]
0x534369: mov     edx, [eax+10h]
0x53436C: push    17h
0x53436E: push    10h
0x534370: call    edx
0x534372: mov     word ptr [eax+4], 10h
0x534378: mov     [esp+14h+var_10], eax
0x53437C: mov     ecx, [esp+14h+arg_0]
0x534380: push    ecx
0x534381: mov     ecx, eax; this
0x534383: mov     [esp+18h+var_4], 0
0x53438B: call    ??0HavokFileStreambufWriter@@QAE@XZ; HavokFileStreambufWriter::HavokFileStreambufWriter(void)
0x534390: mov     ecx, [esp+14h+var_C]
0x534394: mov     large fs:0, ecx
0x53439B: pop     ecx
0x53439C: add     esp, 10h
0x53439F: retn    4
0x9B9140: mov     eax, [ebp-10h]
0x9B9143: push    eax
0x9B9144: call    sub_533D80
0x9B9149: pop     ecx
0x9B914A: retn
0x9B914B: mov     edx, [esp+arg_4]
0x9B914F: lea     eax, [edx-4]
0x9B9152: mov     ecx, [edx-8]
0x9B9155: xor     ecx, eax
0x9B9157: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B915C: mov     eax, offset stru_AE3528
0x9B9161: jmp     ___CxxFrameHandler3
