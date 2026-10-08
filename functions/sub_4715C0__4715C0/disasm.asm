0x4715C0: push    esi; Iterates all controller-manager sequence slots and deactivates each sequence with the supplied ease-out time and transition flag zero.
0x4715C1: push    edi
0x4715C2: mov     edi, ecx
0x4715C4: xor     esi, esi
0x4715C6: cmp     [edi+54h], esi
0x4715C9: jbe     short loc_4715ED
0x4715CB: jmp     short loc_4715D0
0x4715D0: mov     eax, [edi+4Ch]
0x4715D3: fld     [esp+8+arg_0]
0x4715D7: push    0; transition
0x4715D9: push    ecx
0x4715DA: mov     ecx, [eax+esi*4]; this
0x4715DD: fstp    [esp+10h+easeOutTime]; easeOutTime
0x4715E0: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x4715E5: add     esi, 1
0x4715E8: cmp     esi, [edi+54h]
0x4715EB: jb      short loc_4715D0
0x4715ED: pop     edi
0x4715EE: pop     esi
0x4715EF: retn    4
