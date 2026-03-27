0x535680: push    0FFFFFFFFh
0x535682: push    offset SEH_535680
0x535687: mov     eax, large fs:0
0x53568D: push    eax
0x53568E: push    ecx
0x53568F: push    ebp
0x535690: push    esi
0x535691: push    edi
0x535692: mov     eax, ds:0B30AACh
0x535697: xor     eax, esp
0x535699: push    eax
0x53569A: lea     eax, [esp+20h+var_C]
0x53569E: mov     large fs:0, eax
0x5356A4: mov     edi, ecx
0x5356A6: mov     [esp+20h+var_10], edi
0x5356AA: mov     esi, [edi+1A0h]
0x5356B0: test    esi, esi
0x5356B2: mov     ebp, ds:0A2807Ch
0x5356B8: mov     [esp+20h+var_4], 1
0x5356C0: jz      short loc_5356E4
0x5356C2: lea     eax, [esi+4]
0x5356C5: push    eax; lpAddend
0x5356C6: call    ebp ; InterlockedDecrement
0x5356C8: test    eax, eax
0x5356CA: jnz     short loc_5356DA
0x5356CC: test    esi, esi
0x5356CE: jz      short loc_5356DA
0x5356D0: mov     edx, [esi]
0x5356D2: mov     eax, [edx]
0x5356D4: push    1
0x5356D6: mov     ecx, esi
0x5356D8: call    eax
0x5356DA: mov     dword ptr [edi+1A0h], 0
0x5356E4: mov     esi, [edi+1A0h]
0x5356EA: test    esi, esi
0x5356EC: mov     byte ptr [esp+20h+var_4], 0
0x5356F1: jz      short loc_53570B
0x5356F3: lea     ecx, [esi+4]
0x5356F6: push    ecx; lpAddend
0x5356F7: call    ebp ; InterlockedDecrement
0x5356F9: test    eax, eax
0x5356FB: jnz     short loc_53570B
0x5356FD: test    esi, esi
0x5356FF: jz      short loc_53570B
0x535701: mov     edx, [esi]
0x535703: mov     eax, [edx]
0x535705: push    1
0x535707: mov     ecx, esi
0x535709: call    eax
0x53570B: mov     ecx, edi; this
0x53570D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x535715: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x53571A: mov     ecx, [esp+20h+var_C]
0x53571E: mov     large fs:0, ecx
0x535725: pop     ecx
0x535726: pop     edi
0x535727: pop     esi
0x535728: pop     ebp
0x535729: add     esp, 10h
0x53572C: retn
