0x7E2490: mov     eax, [esp+cloneProcess]; [Verified] Shared BSShaderProperty clone-field copier: delegates to the common property copier, copies source +0x1C and +0x20 into the clone, and clears clone +0x24. Directly used by BSShaderProperty_CreateClone and the inherited path used by GeometryDecalShaderProperty. It does not touch BSShaderLightingProperty's +0x80 DECAL_DATA* list.
0x7E2494: push    esi
0x7E2495: push    edi
0x7E2496: mov     edi, [esp+8+clone]
0x7E249A: push    eax
0x7E249B: push    edi
0x7E249C: mov     esi, ecx
0x7E249E: call    sub_73DA70
0x7E24A3: mov     ecx, [esi+1Ch]
0x7E24A6: mov     [edi+1Ch], ecx
0x7E24A9: fld     dword ptr [esi+20h]
0x7E24AC: fstp    dword ptr [edi+20h]
0x7E24AF: mov     dword ptr [edi+24h], 0
0x7E24B6: pop     edi
0x7E24B7: pop     esi
0x7E24B8: retn    8
