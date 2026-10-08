0x4733A0: push    esi; Calculates native stop ease-out from the current physical slot's TESAnimGroup Blend byte at +0x21 unless ActorAnimData +0xC4 forces zero, then passes the original slot argument to ActorAnimData_ClearSlot. Thus aliases 5/6 retain ClearSlot's multi-slot expansion.
0x4733A1: mov     esi, [esp+4+slot]
0x4733A5: mov     eax, esi
0x4733A7: sub     eax, 5
0x4733AA: mov     edx, esi
0x4733AC: jz      short loc_4733BA
0x4733AE: sub     eax, 1
0x4733B1: jnz     short loc_4733BC
0x4733B3: mov     edx, 3
0x4733B8: jmp     short loc_4733BC
0x4733BA: xor     edx, edx
0x4733BC: mov     edx, [ecx+edx*4+0A0h]
0x4733C3: fldz
0x4733C5: test    edx, edx
0x4733C7: fstp    [esp+4+slot]
0x4733CB: jz      short loc_47340D
0x4733CD: cmp     byte ptr [ecx+0C4h], 0
0x4733D4: jnz     short loc_47340D
0x4733D6: mov     eax, [edx+68h]
0x4733D9: fld     dword ptr ds:0B06538h
0x4733DF: mov     al, [eax+21h]
0x4733E2: fstp    [esp+4+slot]
0x4733E6: test    al, al
0x4733E8: jz      short loc_4733FF
0x4733EA: movsx   edx, al
0x4733ED: mov     [esp+4+slot], edx
0x4733F1: fild    [esp+4+slot]
0x4733F5: fdiv    qword ptr ds:0A3AA50h
0x4733FB: fstp    [esp+4+slot]
0x4733FF: fld     [esp+4+slot]
0x473403: fdiv    dword ptr ds:0B06530h
0x473409: fstp    [esp+4+slot]
0x47340D: fld     [esp+4+slot]
0x473411: push    ecx
0x473412: fstp    [esp+8+easeOutTime]; easeOutTime
0x473415: push    esi; slot
0x473416: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x47341B: pop     esi
0x47341C: retn    4
