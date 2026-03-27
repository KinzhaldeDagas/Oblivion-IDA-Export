0x7C2D00: push    0FFFFFFFFh
0x7C2D02: push    offset ??1TallGrassShaderProperty@@UAE@XZ_____ehhandler$??1?$propagator_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@2@V?$ordered_message_processor@I@2@@Concurrency@@UAE@XZ
0x7C2D07: mov     eax, large fs:0
0x7C2D0D: push    eax
0x7C2D0E: push    ecx
0x7C2D0F: push    ebp
0x7C2D10: push    esi
0x7C2D11: push    edi
0x7C2D12: mov     eax, ds:0B30AACh
0x7C2D17: xor     eax, esp
0x7C2D19: push    eax
0x7C2D1A: lea     eax, [esp+20h+var_C]
0x7C2D1E: mov     large fs:0, eax
0x7C2D24: mov     esi, ecx
0x7C2D26: mov     [esp+20h+var_10], esi
0x7C2D2A: mov     dword ptr [esi], offset ??_7TallGrassShaderProperty@@6B@; const TallGrassShaderProperty::`vftable'
0x7C2D30: mov     edi, [esi+0A0h]
0x7C2D36: test    edi, edi
0x7C2D38: mov     ebp, ds:0A2807Ch
0x7C2D3E: mov     [esp+20h+var_4], 2
0x7C2D46: jz      short loc_7C2D6A
0x7C2D48: lea     eax, [edi+4]
0x7C2D4B: push    eax; lpAddend
0x7C2D4C: call    ebp ; InterlockedDecrement
0x7C2D4E: test    eax, eax
0x7C2D50: jnz     short loc_7C2D60
0x7C2D52: test    edi, edi
0x7C2D54: jz      short loc_7C2D60
0x7C2D56: mov     edx, [edi]
0x7C2D58: mov     eax, [edx]
0x7C2D5A: push    1
0x7C2D5C: mov     ecx, edi
0x7C2D5E: call    eax
0x7C2D60: mov     dword ptr [esi+0A0h], 0
0x7C2D6A: mov     dword ptr [esi+9Ch], 0
0x7C2D74: mov     edi, [esi+0A4h]
0x7C2D7A: test    edi, edi
0x7C2D7C: mov     byte ptr [esp+20h+var_4], 1
0x7C2D81: jz      short loc_7C2D9B
0x7C2D83: lea     ecx, [edi+4]
0x7C2D86: push    ecx; lpAddend
0x7C2D87: call    ebp ; InterlockedDecrement
0x7C2D89: test    eax, eax
0x7C2D8B: jnz     short loc_7C2D9B
0x7C2D8D: test    edi, edi
0x7C2D8F: jz      short loc_7C2D9B
0x7C2D91: mov     edx, [edi]
0x7C2D93: mov     eax, [edx]
0x7C2D95: push    1
0x7C2D97: mov     ecx, edi
0x7C2D99: call    eax
0x7C2D9B: mov     edi, [esi+0A0h]
0x7C2DA1: test    edi, edi
0x7C2DA3: mov     byte ptr [esp+20h+var_4], 0
0x7C2DA8: jz      short loc_7C2DC2
0x7C2DAA: lea     ecx, [edi+4]
0x7C2DAD: push    ecx; lpAddend
0x7C2DAE: call    ebp ; InterlockedDecrement
0x7C2DB0: test    eax, eax
0x7C2DB2: jnz     short loc_7C2DC2
0x7C2DB4: test    edi, edi
0x7C2DB6: jz      short loc_7C2DC2
0x7C2DB8: mov     edx, [edi]
0x7C2DBA: mov     eax, [edx]
0x7C2DBC: push    1
0x7C2DBE: mov     ecx, edi
0x7C2DC0: call    eax
0x7C2DC2: mov     ecx, esi; this
0x7C2DC4: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7C2DCC: call    ??1BSShaderLightingProperty@@UAE@XZ; BSShaderLightingProperty::~BSShaderLightingProperty(void)
0x7C2DD1: mov     ecx, dword ptr [esp+20h+var_C]
0x7C2DD5: mov     large fs:0, ecx
0x7C2DDC: pop     ecx
0x7C2DDD: pop     edi
0x7C2DDE: pop     esi
0x7C2DDF: pop     ebp
0x7C2DE0: add     esp, 10h
0x7C2DE3: retn
