0x624F90: push    esi
0x624F91: push    0; a2
0x624F93: mov     esi, ecx
0x624F95: call    Actor_GetActorBaseForm
0x624F9A: push    eax
0x624F9B: call    TESAttackDamageForm_GetDamageForForm
0x624FA0: movzx   eax, ax
0x624FA3: add     esp, 4
0x624FA6: push    eax; int
0x624FA7: mov     ecx, esi; this
0x624FA9: call    Actor_GetFatigueFraction; SmartAI v0.3 evidence: current fatigue / calculated base fatigue; returns 1.0 when base is zero.
0x624FAE: push    ecx
0x624FAF: fstp    [esp+0Ch+var_C]; float
0x624FB2: call    Calc_CreatureAttackDamage
0x624FB7: add     esp, 8
0x624FBA: pop     esi
0x624FBB: jmp     Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
