0x893040: push    0FFFFFFFFh
0x893042: push    offset ??1bhkCharacterController@@UAE@XZ_SEH
0x893047: mov     eax, large fs:0
0x89304D: push    eax
0x89304E: sub     esp, 0Ch
0x893051: push    ebp
0x893052: push    esi
0x893053: push    edi
0x893054: mov     eax, ds:0B30AACh
0x893059: xor     eax, esp
0x89305B: push    eax
0x89305C: lea     eax, [esp+28h+var_C]
0x893060: mov     large fs:0, eax
0x893066: mov     esi, ecx
0x893068: mov     [esp+28h+var_10], esi
0x89306C: lea     ebp, [esi+1F0h]
0x893072: mov     dword ptr [esi], offset ??_7bhkCharacterController@@6BbhkCharacterController@@@; const bhkCharacterController::`vftable'{for `bhkCharacterController'}
0x893078: mov     dword ptr [esi+1E0h], offset ??_7bhkCharacterController@@6BhkCharacterContext@@@; const bhkCharacterController::`vftable'{for `hkCharacterContext'}
0x893082: mov     dword ptr [ebp+0], offset ??_7bhkCharacterController@@6BbhkCharacterListener@@@; const bhkCharacterController::`vftable'{for `bhkCharacterListener'}
0x893089: mov     ecx, [esi+8]
0x89308C: test    ecx, ecx
0x89308E: mov     [esp+28h+var_4], 6
0x893096: mov     dword ptr [esi+3C0h], 0
0x8930A0: jz      short loc_8930A9
0x8930A2: call    sub_8AC0C0
0x8930A7: jmp     short loc_8930AB
0x8930A9: xor     eax, eax
0x8930AB: mov     eax, [eax+8]
0x8930AE: test    eax, eax
0x8930B0: jz      short loc_8930BA
0x8930B2: mov     edi, [eax+2B0h]
0x8930B8: jmp     short loc_8930BC
0x8930BA: xor     edi, edi
0x8930BC: test    edi, edi
0x8930BE: jz      short loc_8930DF
0x8930C0: mov     eax, [edi]
0x8930C2: mov     edx, [eax+58h]
0x8930C5: mov     ecx, edi
0x8930C7: call    edx
0x8930C9: mov     ecx, [esi+8]
0x8930CC: test    ecx, ecx
0x8930CE: jz      short loc_8930D6
0x8930D0: push    ebp
0x8930D1: call    sub_8ACAC0
0x8930D6: mov     eax, [edi]
0x8930D8: mov     edx, [eax+58h]
0x8930DB: mov     ecx, edi
0x8930DD: call    edx
0x8930DF: mov     eax, [esi+3C4h]
0x8930E5: test    eax, eax
0x8930E7: mov     byte ptr [esp+28h+var_4], 5
0x8930EC: js      short loc_893128
0x8930EE: mov     ecx, ds:0BA9DE4h
0x8930F4: mov     edx, large fs:2Ch
0x8930FB: mov     ecx, [edx+ecx*4]
0x8930FE: mov     ecx, [ecx+19Ch]
0x893104: test    ecx, ecx
0x893106: jnz     short loc_89310E
0x893108: mov     ecx, ds:0BA7D9Ch
0x89310E: and     eax, 3FFFFFFFh
0x893113: lea     edx, [eax+eax*2]
0x893116: mov     eax, [esi+3BCh]
0x89311C: push    14h
0x89311E: shl     edx, 4
0x893121: push    edx
0x893122: push    eax
0x893123: call    sub_8A75D0
0x893128: push    offset sub_7016A0; void (__thiscall *)(void *)
0x89312D: push    2; int
0x89312F: push    4; unsigned int
0x893131: lea     ecx, [esi+374h]
0x893137: push    ecx; void *
0x893138: mov     byte ptr [esp+38h+var_4], 4
0x89313D: call    $LN21
0x893142: mov     edi, [esi+368h]
0x893148: test    edi, edi
0x89314A: mov     ebp, ds:0A2807Ch
0x893150: mov     byte ptr [esp+28h+var_4], 3
0x893155: jz      short loc_89316F
0x893157: lea     edx, [edi+4]
0x89315A: push    edx; lpAddend
0x89315B: call    ebp ; InterlockedDecrement
0x89315D: test    eax, eax
0x89315F: jnz     short loc_89316F
0x893161: test    edi, edi
0x893163: jz      short loc_89316F
0x893165: mov     eax, [edi]
0x893167: mov     edx, [eax]
0x893169: push    1
0x89316B: mov     ecx, edi
0x89316D: call    edx
0x89316F: mov     edi, [esi+364h]
0x893175: test    edi, edi
0x893177: mov     byte ptr [esp+28h+var_4], 2
0x89317C: jz      short loc_893196
0x89317E: lea     eax, [edi+4]
0x893181: push    eax; lpAddend
0x893182: call    ebp ; InterlockedDecrement
0x893184: test    eax, eax
0x893186: jnz     short loc_893196
0x893188: test    edi, edi
0x89318A: jz      short loc_893196
0x89318C: mov     edx, [edi]
0x89318E: mov     eax, [edx]
0x893190: push    1
0x893192: mov     ecx, edi
0x893194: call    eax
0x893196: lea     ecx, [esi+1E0h]
0x89319C: mov     dword ptr [esi+1F0h], offset ??_7hkCharacterProxyListener@@6B@; const hkCharacterProxyListener::`vftable'
0x8931A6: mov     byte ptr [esp+28h+var_4], 0
0x8931AB: call    sub_88D340
0x8931B0: mov     ecx, esi; this
0x8931B2: mov     [esp+28h+var_4], 0FFFFFFFFh
0x8931BA: call    ??1bhkCharacterProxy@@UAE@XZ; bhkCharacterProxy::~bhkCharacterProxy(void)
0x8931BF: mov     ecx, [esp+28h+var_C]
0x8931C3: mov     large fs:0, ecx
0x8931CA: pop     ecx
0x8931CB: pop     edi
0x8931CC: pop     esi
0x8931CD: pop     ebp
0x8931CE: add     esp, 18h
0x8931D1: retn
