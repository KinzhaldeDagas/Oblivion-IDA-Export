0x6C4000: mov     ecx, [esp+arg_0]; Cross-fades from an active source sequence to an inactive destination: deactivates the source with the requested ease time, then activates the destination with the same transition time and caller-supplied priority/start/weight/time-sync values. Returns false unless source is active and destination inactive.
0x6C4004: cmp     dword ptr [ecx+44h], 0
0x6C4008: push    esi
0x6C4009: jz      short loc_6C4052
0x6C400B: mov     esi, [esp+4+arg_4]
0x6C400F: cmp     dword ptr [esi+44h], 0
0x6C4013: jnz     short loc_6C4052
0x6C4015: fld     [esp+4+arg_8]
0x6C4019: push    0; transition
0x6C401B: push    ecx
0x6C401C: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x6C401F: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x6C4024: mov     eax, [esp+4+timeSyncSequence]
0x6C4028: fld     [esp+4+arg_8]
0x6C402C: mov     ecx, dword ptr [esp+4+startOver]
0x6C4030: mov     edx, dword ptr [esp+4+priority]
0x6C4034: push    0; transition
0x6C4036: push    eax; timeSyncSequence
0x6C4037: sub     esp, 8
0x6C403A: fstp    [esp+14h+easeInTime]; easeInTime
0x6C403E: fld     [esp+14h+arg_14]
0x6C4042: fstp    [esp+14h+weight]; weight
0x6C4045: push    ecx; startOver
0x6C4046: push    edx; priority
0x6C4047: mov     ecx, esi; this
0x6C4049: call    NiControllerSequence_Activate; Native controller-sequence activation state machine. Rejects an already-active sequence, validates optional time-sync compatibility, records activation parameters, and queues the active sequence with its manager.
0x6C404E: pop     esi
0x6C404F: retn    1Ch
0x6C4052: xor     al, al
0x6C4054: pop     esi
0x6C4055: retn    1Ch
