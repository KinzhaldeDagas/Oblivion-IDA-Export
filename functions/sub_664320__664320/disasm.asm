0x664320: push    esi
0x664321: mov     esi, ecx
0x664323: mov     ecx, [esi+0D4h]
0x664329: test    ecx, ecx
0x66432B: mov     eax, esi
0x66432D: jz      short loc_664331
0x66432F: mov     eax, ecx
0x664331: mov     ecx, [eax+2Ch]
0x664334: add     eax, 2Ch ; ','
0x664337: mov     [esi+720h], ecx
0x66433D: mov     edx, [eax+4]
0x664340: mov     [esi+724h], edx
0x664346: mov     eax, [eax+8]
0x664349: mov     ecx, esi; this
0x66434B: mov     [esi+728h], eax
0x664351: call    TESObjectREFR_GetParentCell
0x664356: test    eax, eax
0x664358: jz      short loc_664382
0x66435A: mov     ecx, esi; this
0x66435C: call    TESObjectREFR_GetParentCell
0x664361: mov     ecx, eax; this
0x664363: call    TESObjectCELL_GetWorldSpace
0x664368: test    eax, eax
0x66436A: jz      short loc_664382
0x66436C: mov     ecx, esi; this
0x66436E: call    TESObjectREFR_GetParentCell
0x664373: mov     ecx, eax; this
0x664375: call    TESObjectCELL_GetWorldSpace
0x66437A: mov     [esi+72Ch], eax
0x664380: pop     esi
0x664381: retn
0x664382: mov     ecx, esi; this
0x664384: call    TESObjectREFR_GetParentCell
0x664389: mov     [esi+72Ch], eax
0x66438F: pop     esi
0x664390: retn
