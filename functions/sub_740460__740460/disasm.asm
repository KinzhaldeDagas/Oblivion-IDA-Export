0x740460: push    0FFFFFFFFh
0x740462: push    offset SEH_8C8900
0x740467: mov     eax, large fs:0
0x74046D: push    eax
0x74046E: push    ecx
0x74046F: mov     eax, ds:0B30AACh
0x740474: xor     eax, esp
0x740476: push    eax
0x740477: lea     eax, [esp+14h+var_C]
0x74047B: mov     large fs:0, eax
0x740481: push    64h ; 'd'; Size
0x740483: call    FormHeapAlloc
0x740488: add     esp, 4
0x74048B: mov     [esp+14h+var_10], eax
0x74048F: test    eax, eax
0x740491: mov     [esp+14h+var_4], 0
0x740499: jz      short loc_7404B6
0x74049B: mov     ecx, eax; this
0x74049D: call    ??0NiParticleMeshesData@@QAE@XZ; NiParticleMeshesData::NiParticleMeshesData(void)
0x7404A2: mov     byte ptr [eax+40h], 1
0x7404A6: mov     ecx, [esp+14h+var_C]
0x7404AA: mov     large fs:0, ecx
0x7404B1: pop     ecx
0x7404B2: add     esp, 10h
0x7404B5: retn
0x7404B6: xor     eax, eax
0x7404B8: mov     byte ptr [eax+40h], 1
0x7404BC: mov     ecx, [esp+14h+var_C]
0x7404C0: mov     large fs:0, ecx
0x7404C7: pop     ecx
0x7404C8: add     esp, 10h
0x7404CB: retn
