0x8C2620: push    0FFFFFFFFh
0x8C2622: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8C2627: mov     eax, large fs:0
0x8C262D: push    eax
0x8C262E: push    ecx
0x8C262F: push    esi
0x8C2630: mov     eax, ds:0B30AACh
0x8C2635: xor     eax, esp
0x8C2637: push    eax
0x8C2638: lea     eax, [esp+18h+var_C]
0x8C263C: mov     large fs:0, eax
0x8C2642: mov     esi, ecx
0x8C2644: mov     [esp+18h+var_10], esi
0x8C2648: mov     dword ptr [esi], offset ??_7bhkHingeConstraint@@6B@; const bhkHingeConstraint::`vftable'
0x8C264E: mov     [esp+18h+var_4], 0
0x8C2656: call    sub_89D700
0x8C265B: sub     dword ptr ds:0BA80DCh, 1
0x8C2662: mov     ecx, esi; this
0x8C2664: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C266C: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8C2671: mov     ecx, [esp+18h+var_C]
0x8C2675: mov     large fs:0, ecx
0x8C267C: pop     ecx
0x8C267D: pop     esi
0x8C267E: add     esp, 10h
0x8C2681: retn
