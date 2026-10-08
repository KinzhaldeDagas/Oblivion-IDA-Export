0x625D80: push    0FFFFFFFFh; Constructs the dynamic 0x64-byte DialoguePackage and takes ownership of the prepared Conversation. Runtime fields at +0x50/+0x54/+0x58 are the conversation/item/response cursors.
0x625D82: push    offset SEH_625D80
0x625D87: mov     eax, large fs:0
0x625D8D: push    eax
0x625D8E: push    ecx
0x625D8F: push    ebx
0x625D90: push    esi
0x625D91: push    edi
0x625D92: mov     eax, ds:0B30AACh
0x625D97: xor     eax, esp
0x625D99: push    eax
0x625D9A: lea     eax, [esp+20h+var_C]
0x625D9E: mov     large fs:0, eax
0x625DA4: mov     esi, ecx
0x625DA6: mov     [esp+20h+var_10], esi
0x625DAA: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x625DAF: mov     ecx, [esp+20h+conversation]; this
0x625DB3: xor     ebx, ebx
0x625DB5: cmp     ecx, ebx
0x625DB7: mov     [esp+20h+var_4], ebx
0x625DBB: mov     dword ptr [esi], offset ??_7DialoguePackage@@6B@; Verified complete TESPackage persistence table extentEC; tail DC/E0/E4/E8 is no-argument size/save/load/init-load virtuals. Derived vtable identity from constructor stores and RTTI names. Prior incompleteDC type corrected.
0x625DC1: mov     [esi+50h], ecx
0x625DC4: jz      short loc_625DCB
0x625DC6: call    Conversation__FirstItem
0x625DCB: mov     edi, [esp+20h+speaker]
0x625DCF: fldz
0x625DD1: mov     eax, [esp+20h+target]
0x625DD5: fstp    dword ptr [esi+44h]; New DialoguePackage begins with responseTimeRemaining=0. A package that is already MiddleHigh therefore advances through Speak(false) at update cadence rather than receiving text-duration delays.
0x625DD8: mov     [esi+60h], eax
0x625DDB: mov     [esi+54h], ebx
0x625DDE: mov     [esi+58h], ebx
0x625DE1: mov     [esi+5Ch], edi
0x625DE4: mov     edx, [edi]
0x625DE6: mov     eax, [edx+17Ch]
0x625DEC: push    ebx
0x625DED: mov     ecx, edi
0x625DEF: call    eax; New DialoguePackage marks the initiating speaker's current procedure incomplete before playback begins.
0x625DF1: mov     [esi+3Ch], ebx; Initialize DialoguePackage.activeSoundHandle to null. Actor::InitDialogue later returns the allocated engine sound-handle object through this field.
0x625DF4: mov     [esi+40h], ebx
0x625DF7: mov     [esi+48h], ebx
0x625DFA: mov     ecx, ds:0B333C4h
0x625E00: push    ebx
0x625E01: push    ecx
0x625E02: mov     ecx, edi
0x625E04: call    TesObjectREF_GetDistance
0x625E09: fstp    [esp+20h+conversation]
0x625E0D: fld     [esp+20h+conversation]
0x625E11: fcomp   qword ptr ds:0A6E6F8h
0x625E17: fnstsw  ax
0x625E19: test    ah, 5
0x625E1C: jp      short loc_625E53
0x625E1E: mov     eax, ds:0B333C4h
0x625E23: cmp     [eax+118h], ebx
0x625E29: jz      short loc_625E4D
0x625E2B: mov     edx, [eax+118h]
0x625E31: mov     ecx, [edx+60h]
0x625E34: push    ebx
0x625E35: push    eax
0x625E36: call    TesObjectREF_GetDistance
0x625E3B: fld     [esp+20h+conversation]
0x625E3F: fcompp
0x625E41: fnstsw  ax
0x625E43: test    ah, 5
0x625E46: jp      short loc_625E53
0x625E48: mov     eax, ds:0B333C4h
0x625E4D: mov     [eax+118h], esi
0x625E53: mov     [esi+4Ch], bl
0x625E56: mov     eax, esi
0x625E58: mov     ecx, dword ptr [esp+20h+var_C]
0x625E5C: mov     large fs:0, ecx
0x625E63: pop     ecx
0x625E64: pop     edi
0x625E65: pop     esi
0x625E66: pop     ebx
0x625E67: add     esp, 10h
0x625E6A: retn    0Ch
0x9C2ED0: mov     ecx, [ebp-10h]; this
0x9C2ED3: jmp     ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
0x9C2ED8: mov     edx, [esp+arg_4]
0x9C2EDC: lea     eax, [edx-10h]
0x9C2EDF: mov     ecx, [edx-14h]
0x9C2EE2: xor     ecx, eax
0x9C2EE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2EE9: mov     eax, offset stru_AEBBEC
0x9C2EEE: jmp     ___CxxFrameHandler3
