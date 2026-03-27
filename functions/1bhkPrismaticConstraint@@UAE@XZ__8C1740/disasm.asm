0x8C1740: push    0FFFFFFFFh
0x8C1742: push    offset ??1bhkBallAndSocketConstraint@@UAE@XZ_SEH
0x8C1747: mov     eax, large fs:0
0x8C174D: push    eax
0x8C174E: push    ecx
0x8C174F: push    esi
0x8C1750: mov     eax, ds:0B30AACh
0x8C1755: xor     eax, esp
0x8C1757: push    eax
0x8C1758: lea     eax, [esp+18h+var_C]
0x8C175C: mov     large fs:0, eax
0x8C1762: mov     esi, ecx
0x8C1764: mov     [esp+18h+var_10], esi
0x8C1768: mov     dword ptr [esi], offset ??_7bhkPrismaticConstraint@@6B@; const bhkPrismaticConstraint::`vftable'
0x8C176E: mov     [esp+18h+var_4], 0
0x8C1776: call    sub_89D700
0x8C177B: sub     dword ptr ds:0BA80C4h, 1
0x8C1782: mov     ecx, esi; this
0x8C1784: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8C178C: call    ??1bhkConstraint@@UAE@XZ; bhkConstraint::~bhkConstraint(void)
0x8C1791: mov     ecx, [esp+18h+var_C]
0x8C1795: mov     large fs:0, ecx
0x8C179C: pop     ecx
0x8C179D: pop     esi
0x8C179E: add     esp, 10h
0x8C17A1: retn
