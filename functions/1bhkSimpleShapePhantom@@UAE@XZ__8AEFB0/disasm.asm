0x8AEFB0: push    0FFFFFFFFh
0x8AEFB2: push    offset ??1bhkCachingShapePhantom@@UAE@XZ_SEH
0x8AEFB7: mov     eax, large fs:0
0x8AEFBD: push    eax
0x8AEFBE: push    ecx
0x8AEFBF: push    esi
0x8AEFC0: mov     eax, ds:0B30AACh
0x8AEFC5: xor     eax, esp
0x8AEFC7: push    eax
0x8AEFC8: lea     eax, [esp+18h+var_C]
0x8AEFCC: mov     large fs:0, eax
0x8AEFD2: mov     esi, ecx
0x8AEFD4: mov     [esp+18h+var_10], esi
0x8AEFD8: mov     dword ptr [esi], offset ??_7bhkSimpleShapePhantom@@6B@; const bhkSimpleShapePhantom::`vftable'
0x8AEFDE: mov     [esp+18h+var_4], 0
0x8AEFE6: call    sub_89D700
0x8AEFEB: sub     dword ptr ds:0BA7F74h, 1
0x8AEFF2: mov     ecx, esi; this
0x8AEFF4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8AEFFC: call    ??1bhkShapePhantom@@UAE@XZ; bhkShapePhantom::~bhkShapePhantom(void)
0x8AF001: mov     ecx, [esp+18h+var_C]
0x8AF005: mov     large fs:0, ecx
0x8AF00C: pop     ecx
0x8AF00D: pop     esi
0x8AF00E: add     esp, 10h
0x8AF011: retn
