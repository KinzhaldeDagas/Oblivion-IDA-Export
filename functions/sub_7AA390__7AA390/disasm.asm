0x7AA390: mov     eax, [esp+left]; MEF PERF 2026-10-07 PASS5: PERF-15 allowed pure comparator: RenderPass** -> geometry at pass+0 -> unsigned DWORD geometry+B4; current Oblivion NiGeometry type identifies+B4 as geomData. Returns signed -1/0/+1 using unsigned key order, no callbacks/writes. Equal geomData addresses retain input order in native merge sort.
0x7AA394: mov     ecx, [eax]
0x7AA396: mov     edx, [esp+right]
0x7AA39A: mov     eax, [edx]
0x7AA39C: mov     eax, [eax]
0x7AA39E: mov     ecx, [ecx]
0x7AA3A0: mov     eax, [eax+0B4h]
0x7AA3A6: mov     ecx, [ecx+0B4h]
0x7AA3AC: cmp     ecx, eax
0x7AA3AE: jnz     short loc_7AA3B3
0x7AA3B0: xor     eax, eax
0x7AA3B2: retn
0x7AA3B3: sbb     eax, eax
0x7AA3B5: and     eax, 0FFFFFFFEh
0x7AA3B8: add     eax, 1
0x7AA3BB: retn
