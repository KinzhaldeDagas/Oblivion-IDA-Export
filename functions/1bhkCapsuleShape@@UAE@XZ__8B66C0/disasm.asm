0x8B66C0: push    0FFFFFFFFh
0x8B66C2: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x8B66C7: mov     eax, large fs:0
0x8B66CD: push    eax
0x8B66CE: push    ecx
0x8B66CF: push    esi
0x8B66D0: mov     eax, ds:0B30AACh
0x8B66D5: xor     eax, esp
0x8B66D7: push    eax
0x8B66D8: lea     eax, [esp+18h+var_C]
0x8B66DC: mov     large fs:0, eax
0x8B66E2: mov     esi, ecx
0x8B66E4: mov     [esp+18h+var_10], esi
0x8B66E8: mov     dword ptr [esi], offset ??_7bhkCapsuleShape@@6B@; const bhkCapsuleShape::`vftable'
0x8B66EE: mov     [esp+18h+var_4], 0
0x8B66F6: call    sub_89D700
0x8B66FB: sub     dword ptr ds:0BA7FD4h, 1
0x8B6702: mov     ecx, esi; this
0x8B6704: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8B670C: call    ??1bhkConvexShape@@UAE@XZ; bhkConvexShape::~bhkConvexShape(void)
0x8B6711: mov     ecx, [esp+18h+var_C]
0x8B6715: mov     large fs:0, ecx
0x8B671C: pop     ecx
0x8B671D: pop     esi
0x8B671E: add     esp, 10h
0x8B6721: retn
