0x6C4480: push    esi; Walks the controller manager's active sequence list and deactivates every sequence in native state 4 (transition source) using the caller-supplied ease-out time.
0x6C4481: push    edi
0x6C4482: mov     edi, ecx
0x6C4484: xor     esi, esi
0x6C4486: cmp     [edi+54h], esi
0x6C4489: jbe     short loc_6C44B3
0x6C448B: jmp     short loc_6C4490
0x6C4490: mov     eax, [edi+4Ch]
0x6C4493: mov     ecx, [eax+esi*4]; this
0x6C4496: cmp     dword ptr [ecx+44h], 4
0x6C449A: jnz     short loc_6C44AB
0x6C449C: fld     [esp+8+arg_0]
0x6C44A0: push    0; transition
0x6C44A2: push    ecx
0x6C44A3: fstp    [esp+10h+easeOutTime]; easeOutTime
0x6C44A6: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x6C44AB: add     esi, 1
0x6C44AE: cmp     esi, [edi+54h]
0x6C44B1: jb      short loc_6C4490
0x6C44B3: pop     edi
0x6C44B4: xor     al, al
0x6C44B6: pop     esi
0x6C44B7: retn    4
