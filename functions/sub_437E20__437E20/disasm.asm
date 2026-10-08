0x437E20: mov     eax, dword ptr [esp+a2]; Verified 0x30-byte QueuedTree task constructor: stores its TESObjectREFR at +0x20 and clears fields +0x18/+0x1C/+0x24/+0x28/+0x2C before installing QueuedTree vtable. The remaining zeroed pointer roles are Unknown. Fallout's constructor initializes a larger QueuedTree with queued-model, base-model, cloned-3D, and distant-attach task pointers.
0x437E24: push    esi
0x437E25: push    eax; a2
0x437E26: mov     esi, ecx
0x437E28: call    sub_436500
0x437E2D: mov     ecx, [esp+4+reference]
0x437E31: xor     eax, eax
0x437E33: mov     [esi+18h], eax
0x437E36: mov     [esi+1Ch], eax
0x437E39: mov     [esi+20h], ecx
0x437E3C: mov     [esi+24h], eax
0x437E3F: mov     [esi+28h], eax
0x437E42: mov     [esi+2Ch], eax
0x437E45: mov     [esi+30h], eax
0x437E48: mov     dword ptr [esi], offset ??_7QueuedTree@@6B@; const QueuedTree::`vftable'
0x437E4E: mov     eax, esi
0x437E50: pop     esi
0x437E51: retn    8
