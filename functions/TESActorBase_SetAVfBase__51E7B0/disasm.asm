0x51E7B0: fld     [esp+arg_4]; TESActorBase_SetAVfBase converts the float value through Double_To_SInt32, then delegates to vtbl +0x134 SetAViBase. Player_Actor_SetAVfBase reaches this through baseform vtbl +0x130; because it funnels into integer byte-backed storage, a future AVU hook can share the same storage guard if a report targets float SetAV paths.
0x51E7B4: push    esi
0x51E7B5: mov     esi, ecx
0x51E7B7: push    edi
0x51E7B8: mov     edi, [esi]
0x51E7BA: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x51E7BF: mov     edx, [edi+134h]
0x51E7C5: push    eax
0x51E7C6: mov     eax, [esp+0Ch+arg_0]
0x51E7CA: push    eax
0x51E7CB: mov     ecx, esi
0x51E7CD: call    edx
0x51E7CF: pop     edi
0x51E7D0: pop     esi
0x51E7D1: retn    8
