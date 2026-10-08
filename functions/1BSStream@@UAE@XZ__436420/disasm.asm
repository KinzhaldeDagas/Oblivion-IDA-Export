0x436420: push    0FFFFFFFFh
0x436422: push    offset ??1BSStream@@UAE@XZ_SEH
0x436427: mov     eax, large fs:0
0x43642D: push    eax
0x43642E: push    ecx
0x43642F: push    esi
0x436430: push    edi
0x436431: mov     eax, ___security_cookie
0x436436: xor     eax, esp
0x436438: push    eax
0x436439: lea     eax, [esp+1Ch+var_C]
0x43643D: mov     large fs:0, eax
0x436443: mov     esi, ecx
0x436445: mov     [esp+1Ch+var_10], esi
0x436449: mov     dword ptr [esi], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x43644F: mov     ecx, [esi+488h]
0x436455: test    ecx, ecx
0x436457: mov     [esp+1Ch+var_4], 1
0x43645F: jz      short loc_436469
0x436461: mov     eax, [ecx]
0x436463: mov     edx, [eax]
0x436465: push    1
0x436467: call    edx
0x436469: mov     dword ptr [esi+488h], 0
0x436473: mov     edi, [esi+48Ch]
0x436479: test    edi, edi
0x43647B: mov     byte ptr [esp+1Ch+var_4], 0
0x436480: jz      short loc_43649E
0x436482: lea     eax, [edi+4]
0x436485: push    eax; lpAddend
0x436486: call    ds:InterlockedDecrement
0x43648C: test    eax, eax
0x43648E: jnz     short loc_43649E
0x436490: test    edi, edi
0x436492: jz      short loc_43649E
0x436494: mov     edx, [edi]
0x436496: mov     eax, [edx]
0x436498: push    1
0x43649A: mov     ecx, edi
0x43649C: call    eax
0x43649E: mov     ecx, esi; this
0x4364A0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4364A8: call    ??1NiStream@@UAE@XZ; NiStream::~NiStream(void)
0x4364AD: mov     ecx, [esp+1Ch+var_C]
0x4364B1: mov     large fs:0, ecx
0x4364B8: pop     ecx
0x4364B9: pop     edi
0x4364BA: pop     esi
0x4364BB: add     esp, 10h
0x4364BE: retn
0x9AC260: mov     ecx, [ebp-10h]; this
0x9AC263: jmp     ??1NiStream@@UAE@XZ; NiStream::~NiStream(void)
0x9AC268: mov     ecx, [ebp-10h]
0x9AC26B: add     ecx, 48Ch; slot
0x9AC271: jmp     NiPointerSlot_Release
0x9AC276: mov     edx, [esp+arg_4]
0x9AC27A: lea     eax, [edx-0Ch]
0x9AC27D: mov     ecx, [edx-10h]
0x9AC280: xor     ecx, eax
0x9AC282: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC287: mov     eax, offset stru_AD8F74
0x9AC28C: jmp     ___CxxFrameHandler3
