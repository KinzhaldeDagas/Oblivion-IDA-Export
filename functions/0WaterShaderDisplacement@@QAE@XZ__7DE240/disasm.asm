0x7DE240: push    0FFFFFFFFh
0x7DE242: push    offset ??0WaterShaderDisplacement@@QAE@XZ_SEH
0x7DE247: mov     eax, large fs:0
0x7DE24D: push    eax
0x7DE24E: push    ecx
0x7DE24F: push    ebx
0x7DE250: push    esi
0x7DE251: mov     eax, ds:0B30AACh
0x7DE256: xor     eax, esp
0x7DE258: push    eax
0x7DE259: lea     eax, [esp+1Ch+var_C]
0x7DE25D: mov     large fs:0, eax
0x7DE263: mov     esi, ecx
0x7DE265: mov     [esp+1Ch+var_10], esi
0x7DE269: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7DE26E: push    offset sub_7016A0; a5
0x7DE273: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7DE278: push    8; size
0x7DE27A: push    4; a2
0x7DE27C: lea     eax, [esi+0B4h]
0x7DE282: xor     ebx, ebx
0x7DE284: push    eax; a1
0x7DE285: mov     [esp+30h+var_4], ebx
0x7DE289: mov     dword ptr [esi], offset ??_7WaterShaderDisplacement@@6B@; const WaterShaderDisplacement::`vftable'
0x7DE28F: call    ArrayConstructor
0x7DE294: push    offset sub_7016A0; a5
0x7DE299: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7DE29E: push    8; size
0x7DE2A0: push    4; a2
0x7DE2A2: lea     ecx, [esi+0D4h]
0x7DE2A8: push    ecx; a1
0x7DE2A9: mov     byte ptr [esp+30h+var_4], 1
0x7DE2AE: call    ArrayConstructor
0x7DE2B3: fldz
0x7DE2B5: mov     [esi+0F8h], ebx
0x7DE2BB: mov     [esi+0FCh], ebx
0x7DE2C1: mov     [esi+100h], ebx
0x7DE2C7: mov     [esi+104h], ebx
0x7DE2CD: mov     [esi+108h], ebx
0x7DE2D3: mov     [esi+10Ch], ebx
0x7DE2D9: mov     byte ptr [esi+20h], 1
0x7DE2DD: mov     ds:0B45F54h, esi
0x7DE2E3: mov     [esi+0F4h], ebx
0x7DE2E9: mov     ds:0B3FF00h, bl
0x7DE2EF: fst     dword ptr [esi+114h]
0x7DE2F5: fld     dword ptr ds:0A2FAACh
0x7DE2FB: mov     eax, esi
0x7DE2FD: fst     dword ptr [esi+118h]
0x7DE303: fst     dword ptr [esi+11Ch]
0x7DE309: fld1
0x7DE30B: fstp    dword ptr [esi+120h]
0x7DE311: fld     dword ptr ds:0A43328h
0x7DE317: fst     dword ptr [esi+124h]
0x7DE31D: fxch    st(2)
0x7DE31F: fstp    dword ptr ds:0B45F44h
0x7DE325: fstp    dword ptr ds:0B45F58h
0x7DE32B: fld     dword ptr ds:0A3F424h
0x7DE331: fst     dword ptr ds:0B45F5Ch
0x7DE337: fld     dword ptr ds:0A47E70h
0x7DE33D: fst     dword ptr ds:0B45F60h
0x7DE343: fld     dword ptr ds:0A34BA0h
0x7DE349: fstp    dword ptr ds:0B45F64h
0x7DE34F: fld     dword ptr ds:0A47E6Ch
0x7DE355: fstp    dword ptr ds:0B45F68h
0x7DE35B: fxch    st(1)
0x7DE35D: fstp    dword ptr ds:0B45F6Ch
0x7DE363: fstp    dword ptr ds:0B45F70h
0x7DE369: fstp    dword ptr ds:0B45F74h
0x7DE36F: mov     [esi+90h], ebx
0x7DE375: mov     ecx, [esp+1Ch+var_C]
0x7DE379: mov     large fs:0, ecx
0x7DE380: pop     ecx
0x7DE381: pop     esi
0x7DE382: pop     ebx
0x7DE383: add     esp, 10h
0x7DE386: retn
