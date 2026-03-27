0x4DD850: push    0FFFFFFFFh
0x4DD852: push    offset SEH_8C8970
0x4DD857: mov     eax, large fs:0
0x4DD85D: push    eax
0x4DD85E: push    ecx
0x4DD85F: push    esi
0x4DD860: push    edi; int
0x4DD861: mov     eax, ds:0B30AACh
0x4DD866: xor     eax, esp
0x4DD868: push    eax; int
0x4DD869: lea     eax, [esp+1Ch+var_C]
0x4DD86D: mov     large fs:0, eax
0x4DD873: mov     esi, ecx
0x4DD875: mov     eax, [esi+8]
0x4DD878: shr     eax, 0Bh
0x4DD87B: test    al, 1
0x4DD87D: jz      loc_4DDAEE
0x4DD883: mov     edx, [esi]
0x4DD885: mov     eax, [edx+90h]
0x4DD88B: push    1
0x4DD88D: call    eax
0x4DD88F: mov     edx, [esi]
0x4DD891: mov     eax, [edx+40h]
0x4DD894: push    40000000h
0x4DD899: mov     ecx, esi
0x4DD89B: call    eax
0x4DD89D: push    0; a2
0x4DD89F: mov     ecx, esi; this
0x4DD8A1: call    TESForm_SetEnabled?
0x4DD8A6: mov     edx, [esi]
0x4DD8A8: mov     eax, [edx+190h]
0x4DD8AE: mov     ecx, esi
0x4DD8B0: call    eax
0x4DD8B2: test    al, al
0x4DD8B4: jz      short loc_4DD8C4
0x4DD8B6: mov     edx, [esi]
0x4DD8B8: mov     eax, [edx+184h]
0x4DD8BE: push    1
0x4DD8C0: mov     ecx, esi
0x4DD8C2: call    eax
0x4DD8C4: mov     edx, [esi]
0x4DD8C6: mov     eax, [edx+188h]
0x4DD8CC: mov     ecx, esi
0x4DD8CE: xor     edi, edi
0x4DD8D0: call    eax
0x4DD8D2: test    al, al
0x4DD8D4: jz      short loc_4DD924
0x4DD8D6: cmp     dword ptr [esi+58h], 0
0x4DD8DA: mov     edi, esi
0x4DD8DC: jnz     short loc_4DD924
0x4DD8DE: push    90h; Size
0x4DD8E3: call    FormHeapAlloc
0x4DD8E8: add     esp, 4
0x4DD8EB: mov     [esp+1Ch+var_10], eax
0x4DD8EF: test    eax, eax
0x4DD8F1: mov     [esp+1Ch+var_4], 0
0x4DD8F9: jz      short loc_4DD904
0x4DD8FB: mov     ecx, eax; this
0x4DD8FD: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x4DD902: jmp     short loc_4DD906
0x4DD904: xor     eax, eax
0x4DD906: push    0
0x4DD908: push    0
0x4DD90A: push    0
0x4DD90C: push    3
0x4DD90E: push    esi
0x4DD90F: mov     ecx, offset ActorProcessManager_ptr
0x4DD914: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4DD91C: mov     [esi+58h], eax
0x4DD91F: call    sub_673A90
0x4DD924: mov     eax, [esi+40h]
0x4DD927: test    eax, eax
0x4DD929: jz      loc_4DDA48
0x4DD92F: cmp     byte ptr [eax+26h], 6
0x4DD933: jnz     loc_4DDA48
0x4DD939: mov     edx, [esi]
0x4DD93B: mov     eax, [edx+154h]
0x4DD941: mov     ecx, esi
0x4DD943: call    eax
0x4DD945: test    eax, eax
0x4DD947: jnz     loc_4DDA48
0x4DD94D: mov     ecx, ds:0B33A1Ch
0x4DD953: push    esi
0x4DD954: call    sub_4354F0
0x4DD959: test    al, al
0x4DD95B: jnz     loc_4DDA48
0x4DD961: test    edi, edi
0x4DD963: jz      short loc_4DD981
0x4DD965: mov     edx, [edi]
0x4DD967: mov     eax, [edx+190h]
0x4DD96D: mov     ecx, edi
0x4DD96F: call    eax
0x4DD971: test    al, al
0x4DD973: jz      short loc_4DD981
0x4DD975: mov     edx, [edi]
0x4DD977: mov     eax, [edx+1A4h]
0x4DD97D: mov     ecx, edi
0x4DD97F: call    eax
0x4DD981: push    1
0x4DD983: mov     ecx, esi
0x4DD985: call    sub_4D9310
0x4DD98A: mov     ecx, [esi+8]
0x4DD98D: shr     ecx, 5
0x4DD990: test    cl, 1
0x4DD993: jnz     short loc_4DD9F2
0x4DD995: mov     edx, [esi]
0x4DD997: mov     eax, [edx+170h]
0x4DD99D: mov     ecx, esi
0x4DD99F: call    eax
0x4DD9A1: test    eax, eax
0x4DD9A3: jz      short loc_4DD9F2
0x4DD9A5: mov     edx, [esi]
0x4DD9A7: mov     eax, [edx+170h]
0x4DD9AD: mov     ecx, esi
0x4DD9AF: call    eax
0x4DD9B1: cmp     byte ptr [eax+4], 1Ah
0x4DD9B5: jz      short loc_4DD9D4
0x4DD9B7: mov     edx, [esi]
0x4DD9B9: mov     eax, [edx+170h]
0x4DD9BF: mov     ecx, esi
0x4DD9C1: call    eax
0x4DD9C3: cmp     byte ptr [eax+4], 12h
0x4DD9C7: jz      short loc_4DD9D4
0x4DD9C9: mov     ecx, esi
0x4DD9CB: call    sub_4364E0
0x4DD9D0: test    al, al
0x4DD9D2: jnz     short loc_4DD9F2
0x4DD9D4: mov     eax, [esi+40h]
0x4DD9D7: mov     ecx, ds:0B333A0h
0x4DD9DD: push    0
0x4DD9DF: push    eax
0x4DD9E0: call    sub_440C80
0x4DD9E5: mov     ecx, ds:0B33A1Ch
0x4DD9EB: push    eax
0x4DD9EC: push    esi
0x4DD9ED: call    sub_438060
0x4DD9F2: mov     edx, [esi]
0x4DD9F4: mov     eax, [edx+154h]
0x4DD9FA: mov     ecx, esi
0x4DD9FC: call    eax
0x4DD9FE: test    eax, eax
0x4DDA00: jz      short loc_4DDA48
0x4DDA02: mov     edx, [esi]
0x4DDA04: mov     eax, [edx+170h]
0x4DDA0A: mov     ecx, esi
0x4DDA0C: call    eax
0x4DDA0E: test    eax, eax
0x4DDA10: jz      short loc_4DDA48
0x4DDA12: mov     edx, [esi]
0x4DDA14: mov     eax, [edx+170h]
0x4DDA1A: mov     ecx, esi
0x4DDA1C: call    eax
0x4DDA1E: cmp     byte ptr [eax+4], 1Ah
0x4DDA22: jnz     short loc_4DDA48
0x4DDA24: lea     ecx, [esi+44h]
0x4DDA27: call    sub_41E650
0x4DDA2C: test    eax, eax
0x4DDA2E: jz      short loc_4DDA48
0x4DDA30: mov     eax, [eax]
0x4DDA32: test    eax, eax
0x4DDA34: jz      short loc_4DDA48
0x4DDA36: push    eax
0x4DDA37: push    0
0x4DDA39: call    GetShadowSceneNode
0x4DDA3E: add     esp, 4
0x4DDA41: mov     ecx, eax
0x4DDA43: call    sub_7C6FF0
0x4DDA48: test    edi, edi
0x4DDA4A: jz      short loc_4DDAA0
0x4DDA4C: mov     edx, [edi]
0x4DDA4E: mov     eax, [edx+1C4h]
0x4DDA54: mov     ecx, edi
0x4DDA56: call    eax
0x4DDA58: mov     edx, [edi]
0x4DDA5A: mov     eax, [edx+190h]
0x4DDA60: mov     ecx, edi
0x4DDA62: call    eax
0x4DDA64: test    al, al
0x4DDA66: jz      short loc_4DDAA0
0x4DDA68: mov     ecx, [edi+58h]
0x4DDA6B: test    ecx, ecx
0x4DDA6D: jz      short loc_4DDAA0
0x4DDA6F: mov     edx, [ecx]
0x4DDA71: mov     eax, [edx+14h]
0x4DDA74: push    1
0x4DDA76: push    edi
0x4DDA77: call    eax
0x4DDA79: mov     ecx, edi; int
0x4DDA7B: call    EvaluatePackage
0x4DDA80: mov     ecx, [edi+58h]
0x4DDA83: mov     edx, [ecx]
0x4DDA85: mov     eax, [edx+8]
0x4DDA88: call    eax
0x4DDA8A: test    eax, eax
0x4DDA8C: jz      short loc_4DDAA0
0x4DDA8E: mov     edx, [edi]
0x4DDA90: fldz
0x4DDA92: mov     eax, [edx+1C0h]
0x4DDA98: push    ecx
0x4DDA99: mov     ecx, edi
0x4DDA9B: fstp    [esp+20h+var_20]
0x4DDA9E: call    eax
0x4DDAA0: mov     ecx, ds:0B333C4h
0x4DDAA6: push    esi
0x4DDAA7: call    sub_665260
0x4DDAAC: lea     ecx, [esi+44h]
0x4DDAAF: call    sub_4203A0
0x4DDAB4: mov     esi, eax
0x4DDAB6: test    esi, esi
0x4DDAB8: jz      short loc_4DDAEE
0x4DDABA: lea     ebx, [ebx+0]
0x4DDAC0: cmp     dword ptr [esi+4], 0
0x4DDAC4: jnz     short loc_4DDACB
0x4DDAC6: cmp     dword ptr [esi], 0
0x4DDAC9: jz      short loc_4DDAEE
0x4DDACB: mov     edi, [esi]
0x4DDACD: lea     ecx, [edi+44h]
0x4DDAD0: call    sub_420340
0x4DDAD5: test    al, al
0x4DDAD7: mov     ecx, edi
0x4DDAD9: jz      short loc_4DDAE2
0x4DDADB: call    sub_4E4690
0x4DDAE0: jmp     short loc_4DDAE7
0x4DDAE2: call    sub_4DD850
0x4DDAE7: mov     esi, [esi+4]
0x4DDAEA: test    esi, esi
0x4DDAEC: jnz     short loc_4DDAC0
0x4DDAEE: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4DDAF2: mov     large fs:0, ecx
0x4DDAF9: pop     ecx
0x4DDAFA: pop     edi
0x4DDAFB: pop     esi
0x4DDAFC: add     esp, 10h
0x4DDAFF: retn
