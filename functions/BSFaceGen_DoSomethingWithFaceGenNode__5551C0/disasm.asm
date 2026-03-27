0x5551C0: push    0FFFFFFFFh
0x5551C2: push    offset BSFaceGen_DoSomethingWithFaceGenNode_SEH
0x5551C7: mov     eax, large fs:0
0x5551CD: push    eax
0x5551CE: sub     esp, 78h
0x5551D1: mov     eax, ds:0B30AACh
0x5551D6: xor     eax, esp
0x5551D8: mov     [esp+84h+var_10], eax
0x5551DC: push    ebx
0x5551DD: push    ebp
0x5551DE: push    esi
0x5551DF: push    edi
0x5551E0: mov     eax, ds:0B30AACh
0x5551E5: xor     eax, esp
0x5551E7: push    eax
0x5551E8: lea     eax, [esp+98h+var_C]
0x5551EF: mov     large fs:0, eax
0x5551F5: mov     eax, [esp+98h+arg_0]
0x5551FC: mov     ebp, [esp+98h+arg_4]
0x555203: xor     ebx, ebx
0x555205: mov     [esp+98h+var_6C], ebx
0x555209: mov     [esp+98h+var_3C], eax
0x55520D: mov     [esp+98h+var_80], ebp
0x555211: mov     [esp+98h+var_28], ebx
0x555215: mov     [esp+98h+var_24], bx
0x55521A: mov     [esp+98h+var_22], bx
0x55521F: mov     [esp+98h+var_4], ebx
0x555226: mov     [esp+98h+var_18], ebx
0x55522D: mov     [esp+98h+var_14], bx
0x555235: mov     [esp+98h+var_12], bx
0x55523D: mov     [esp+98h+var_20], ebx
0x555241: mov     [esp+98h+var_1C], bx
0x555246: mov     [esp+98h+var_1A], bx
0x55524B: mov     [esp+98h+var_44.m_data], ebx
0x55524F: mov     [esp+98h+var_44.m_dataLen], bx
0x555254: mov     [esp+98h+var_44.m_bufLen], bx
0x555259: mov     [esp+98h+var_74], ebx
0x55525D: mov     [esp+98h+var_70], bx
0x555262: mov     [esp+98h+var_6E], bx
0x555267: mov     [esp+98h+var_64], ebx
0x55526B: mov     [esp+98h+var_78], ebx
0x55526F: mov     [esp+98h+var_68], ebx
0x555273: cmp     eax, ebx
0x555275: mov     byte ptr [esp+98h+var_4], 7
0x55527D: mov     [esp+98h+var_7C], ebx
0x555281: jz      loc_5559A7
0x555287: cmp     ebp, ebx
0x555289: jz      loc_5559A7
0x55528F: cmp     ds:0B39B80h, ebx
0x555295: jnz     short loc_55529C
0x555297: call    sub_553550
0x55529C: mov     ecx, ds:0B39B80h
0x5552A2: push    ebp
0x5552A3: push    ebx
0x5552A4: push    ebx
0x5552A5: push    ebx
0x5552A6: add     ecx, 0C8h ; 'È'
0x5552AC: call    sub_6EDD30
0x5552B1: fstp    [esp+98h+var_5C]
0x5552B5: fld     [esp+98h+var_5C]
0x5552B9: sub     esp, 8
0x5552BC: fstp    [esp+0A0h+var_A0]; double
0x5552BF: call    _floor
0x5552C4: add     esp, 8
0x5552C7: call    Double_To_SInt32
0x5552CC: xor     esi, esi
0x5552CE: mov     byte ptr [esp+98h+var_38], al
0x5552D2: mov     [esp+98h+var_60], esi
0x5552D6: mov     edi, 1
0x5552DB: jmp     short loc_5552E0
0x5552DD: align 10h
0x5552E0: push    ebx; a3
0x5552E1: push    offset EmptyString; a2
0x5552E6: lea     ecx, [esp+0A0h+var_44]; this
0x5552EA: call    BSStringT_Set
0x5552EF: cmp     esi, 2
0x5552F2: jnz     short loc_5552FF
0x5552F4: cmp     [ebp+70h], ebx
0x5552F7: jz      loc_5556DE
0x5552FD: jmp     short loc_555327
0x5552FF: cmp     esi, edi
0x555301: jnz     short loc_55530D
0x555303: cmp     [ebp+70h], edi
0x555306: jnz     short loc_555327
0x555308: jmp     loc_5556E6
0x55530D: cmp     esi, 7
0x555310: jz      loc_5556DE
0x555316: cmp     esi, 8
0x555319: jz      loc_5556DE
0x55531F: cmp     esi, ebx
0x555321: mov     [esp+98h+var_7C], edi
0x555325: jnz     short loc_55532F
0x555327: mov     [esp+98h+var_7C], 0Eh
0x55532F: mov     eax, [ebp+78h]
0x555332: lea     edi, ds:0[esi*4]
0x555339: cmp     [edi+eax], ebx
0x55533C: jz      loc_5556DE
0x555342: mov     ecx, [ebp+88h]
0x555348: cmp     [edi+ecx], ebx
0x55534B: jz      loc_5556DE
0x555351: mov     eax, [ebp+98h]
0x555357: mov     ecx, [esp+98h+var_3C]
0x55535B: mov     edx, [ecx]
0x55535D: mov     edx, [edx+58h]
0x555360: add     eax, edi
0x555362: mov     eax, [eax]
0x555364: push    eax
0x555365: call    edx
0x555367: cmp     eax, ebx
0x555369: mov     [esp+9Ch+var_5C], eax
0x55536D: jz      loc_5556DE
0x555373: mov     edx, [eax]
0x555375: mov     ecx, eax
0x555377: mov     eax, [edx+10h]
0x55537A: call    eax
0x55537C: cmp     eax, ebx
0x55537E: jz      loc_5556DE
0x555384: push    eax
0x555385: call    sub_5507E0
0x55538A: mov     ebp, eax
0x55538C: add     esp, 4
0x55538F: cmp     ebp, ebx
0x555391: jz      loc_5556DE
0x555397: mov     ecx, [esp+9Ch+var_80]
0x55539B: mov     esi, [esp+9Ch+var_5C]
0x55539F: push    1
0x5553A1: push    1
0x5553A3: push    ecx
0x5553A4: push    esi
0x5553A5: call    sub_7B8940
0x5553AA: add     esp, 10h
0x5553AD: push    4
0x5553AF: mov     ecx, esi
0x5553B1: call    NiNode_GetNiPropertyByID
0x5553B6: mov     esi, eax
0x5553B8: cmp     esi, ebx
0x5553BA: jz      short loc_5553DF
0x5553BC: mov     edx, [esi]
0x5553BE: mov     eax, [edx+54h]
0x5553C1: mov     ecx, esi
0x5553C3: call    eax
0x5553C5: cmp     eax, 5
0x5553C8: jl      short loc_5553DF
0x5553CA: mov     edx, [esi]
0x5553CC: mov     eax, [edx+54h]
0x5553CF: mov     ecx, esi
0x5553D1: call    eax
0x5553D3: cmp     eax, 0Ah
0x5553D6: jg      short loc_5553DF
0x5553D8: mov     eax, 1
0x5553DD: jmp     short loc_5553E1
0x5553DF: xor     eax, eax
0x5553E1: neg     eax
0x5553E3: sbb     eax, eax
0x5553E5: and     eax, esi
0x5553E7: mov     esi, eax
0x5553E9: jz      loc_5556DE
0x5553EF: mov     eax, [esp+9Ch+var_84]
0x5553F3: cmp     [eax+0AEh], bx
0x5553FA: jz      short loc_55541C
0x5553FC: cmp     [eax+0B4h], bl
0x555402: jz      short loc_55541C
0x555404: mov     ecx, eax
0x555406: mov     edx, [ecx+0A8h]
0x55540C: add     edx, edi
0x55540E: push    edx
0x55540F: lea     ecx, [esp+0A0h+var_7C]
0x555413: call    sub_55E2A0
0x555418: mov     eax, [esp+9Ch+var_84]
0x55541C: cmp     [esp+9Ch+var_64], ebx
0x555420: jnz     loc_5554F0
0x555426: cmp     byte ptr [esp+9Ch+var_3C], bl
0x55542A: jl      loc_5554F0
0x555430: mov     eax, [eax+88h]
0x555436: mov     eax, [eax]
0x555438: mov     eax, [eax+4]
0x55543B: cmp     eax, ebx
0x55543D: jnz     short loc_555444
0x55543F: mov     eax, offset EmptyString
0x555444: mov     ecx, [esp+9Ch+var_84]
0x555448: mov     edx, [ecx+70h]
0x55544B: push    eax
0x55544C: mov     eax, [esp+0A0h+var_3C]
0x555450: push    eax
0x555451: push    edx
0x555452: lea     eax, [esp+0A8h+ArgList]
0x555456: push    eax
0x555457: call    sub_551A00
0x55545C: add     esp, 10h
0x55545F: test    eax, eax
0x555461: jz      loc_5554EC
0x555467: mov     edi, [esp+9Ch+var_84]
0x55546B: cmp     [edi+0AEh], bx
0x555472: jz      short loc_55547E
0x555474: mov     ecx, [edi+0A8h]
0x55547A: cmp     [ecx], ebx
0x55547C: jnz     short loc_5554A0
0x55547E: mov     ecx, offset stru_B39C00; lpCriticalSection
0x555483: call    sub_43F2E0
0x555488: push    ebx
0x555489: lea     edx, [esp+0A0h+var_7C]
0x55548D: push    edx
0x55548E: push    edi
0x55548F: mov     ecx, ebp
0x555491: call    sub_557E60
0x555496: mov     ecx, offset stru_B39C00; lpCriticalSection
0x55549B: call    sub_43F300
0x5554A0: mov     ebp, dword ptr [esp+9Ch+ArgList]
0x5554A4: mov     ecx, ds:0B333A0h
0x5554AA: push    ebx; char
0x5554AB: push    ebx; char
0x5554AC: push    ebp; ArgList
0x5554AD: lea     eax, [esp+0A8h+var_38]
0x5554B1: push    eax; int
0x5554B2: call    sub_442890
0x5554B7: mov     eax, [eax]
0x5554B9: push    eax; a2
0x5554BA: lea     ecx, [esp+0A0h+var_6C]; this
0x5554BE: mov     [esp+0A0h+var_8], 8
0x5554C6: call    NiSmartPointer_Set??
0x5554CB: lea     ecx, [esp+9Ch+var_38]; this
0x5554CF: mov     [esp+9Ch+var_8], 7
0x5554D7: call    sub_7016A0
0x5554DC: lea     ecx, [esp+9Ch+var_78]
0x5554E0: push    ebp
0x5554E1: push    ecx
0x5554E2: call    sub_46FF20
0x5554E7: add     esp, 8
0x5554EA: jmp     short loc_555547
0x5554EC: mov     eax, [esp+9Ch+var_84]
0x5554F0: cmp     [eax+0AEh], bx
0x5554F7: jz      short loc_555504
0x5554F9: mov     edx, [eax+0A8h]
0x5554FF: cmp     [edi+edx], ebx
0x555502: jnz     short loc_55552A
0x555504: mov     ecx, offset stru_B39C00; lpCriticalSection
0x555509: call    sub_43F2E0
0x55550E: mov     ecx, [esp+9Ch+var_84]
0x555512: push    ebx
0x555513: lea     eax, [esp+0A0h+var_7C]
0x555517: push    eax
0x555518: push    ecx
0x555519: mov     ecx, ebp
0x55551B: call    sub_557E60
0x555520: mov     ecx, offset stru_B39C00; lpCriticalSection
0x555525: call    sub_43F300
0x55552A: mov     edx, [esp+9Ch+var_84]
0x55552E: mov     eax, [edx+88h]
0x555534: mov     ecx, [edi+eax]
0x555537: mov     edx, [ecx]
0x555539: mov     edx, [edx+10h]
0x55553C: lea     eax, [esp+9Ch+var_78]
0x555540: push    eax
0x555541: call    edx
0x555543: mov     edi, [esp+0A0h+var_88]
0x555547: mov     eax, [esp+9Ch+var_78]
0x55554B: cmp     eax, ebx
0x55554D: jz      short loc_555586
0x55554F: mov     ecx, ds:0B333A0h
