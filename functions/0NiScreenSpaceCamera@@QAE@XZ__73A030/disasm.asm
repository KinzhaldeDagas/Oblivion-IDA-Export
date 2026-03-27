0x73A030: push    0FFFFFFFFh
0x73A032: push    offset ??0NiScreenSpaceCamera@@QAE@XZ_SEH
0x73A037: mov     eax, large fs:0
0x73A03D: push    eax
0x73A03E: push    ecx
0x73A03F: push    esi
0x73A040: mov     eax, ds:0B30AACh
0x73A045: xor     eax, esp
0x73A047: push    eax
0x73A048: lea     eax, [esp+18h+var_C]
0x73A04C: mov     large fs:0, eax
0x73A052: mov     esi, ecx
0x73A054: mov     [esp+18h+var_10], esi
0x73A058: call    sub_70D590
0x73A05D: push    5
0x73A05F: push    5
0x73A061: lea     ecx, [esi+124h]
0x73A067: mov     [esp+20h+var_4], 0
0x73A06F: mov     dword ptr [esi], offset ??_7NiScreenSpaceCamera@@6B@; const NiScreenSpaceCamera::`vftable'
0x73A075: call    sub_739710
0x73A07A: push    5
0x73A07C: push    5
0x73A07E: lea     ecx, [esi+134h]
0x73A084: mov     byte ptr [esp+20h+var_4], 1
0x73A089: call    sub_7394A0
0x73A08E: mov     ecx, esi
0x73A090: mov     byte ptr [esp+18h+var_4], 2
0x73A095: mov     byte ptr [esi+104h], 1
0x73A09C: call    unknown_libname_9_0
0x73A0A1: mov     ecx, esi
0x73A0A3: call    sub_70CC70
0x73A0A8: mov     eax, esi
0x73A0AA: mov     ecx, [esp+18h+var_C]
0x73A0AE: mov     large fs:0, ecx
0x73A0B5: pop     ecx
0x73A0B6: pop     esi
0x73A0B7: add     esp, 10h
0x73A0BA: retn
