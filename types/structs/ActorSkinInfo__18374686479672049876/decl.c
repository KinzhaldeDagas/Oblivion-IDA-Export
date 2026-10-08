struct ActorSkinInfo
{
NiNode *Bip01Node; ///< Exact-name Bip01 root cached by 0x478070.
UInt32 HeadNodeFlags; ///< Bit/validity word for HeadNode; native cache sets low bit when exact-name lookup yields a NiNode.
NiNode *HeadNode;
UInt32 RFinger1NodeFlags;
NiNode *RFinger1Node;
UInt32 LFinger1NodeFlags;
NiNode *LFinger1Node;
UInt32 WeaponNodeFlags;
NiNode *WeaponNode;
UInt32 BackWeaponNodeFlags;
NiNode *BackWeaponNode;
UInt32 SideWeaponNodeFlags;
NiNode *SideWeaponNode;
UInt32 QuiverNodeFlags;
NiNode *QuiverNode; ///< Exact-name Quiver node; cached-node index 6 and native Arrow:0 clone source.
UInt32 LForearmTwistNodeFlags;
NiNode *LForearmTwistNode;
UInt32 TorchNodeFlags;
NiNode *TorchNode;
UInt32 unk04C;
UInt32 unk050;
Actor *Actor054;
UInt32 unk058;
TESForm *unk05C;
TESModel *unk060;
NiNode *unk064;
UInt32 unk068;
TESForm *UpperBodyForm;
TESModel *UpperBodyModel;
NiNode *UpperBodyObject;
UInt32 unk078;
TESForm *LowerBodyForm;
TESModel *LowerBodyModel;
NiNode *LowerBodyObject;
UInt32 unk088;
TESForm *HandForm;
TESModel *HandModel;
NiNode *HandObject;
UInt32 unk098;
TESForm *FootForm;
TESModel *FootModel;
NiNode *FootObject;
UInt32 unk0A8;
TESForm *RingSlot6Form; ///< Biped equipment slot 6 form; exact left/right ring polarity is not independently proven.
TESModel *RingSlot6Model; ///< Biped equipment slot 6 model.
NiAVObject *RingSlot6Object; ///< Biped equipment slot 6 attached 3D.
UInt32 unk0B8; ///< Unproven per-slot metadata dword; not part of the 0x0C {form,model,object3D} slot.
TESForm *RingSlot7Form; ///< Biped equipment slot 7 form; exact left/right ring polarity is not independently proven.
TESModel *RingSlot7Model; ///< Biped equipment slot 7 model.
NiAVObject *RingSlot7Object; ///< Biped equipment slot 7 attached 3D.
UInt32 unk0C8; ///< Unproven per-slot metadata dword; not part of the 0x0C {form,model,object3D} slot.
TESForm *AmuletForm; ///< Biped equipment slot 8 (amulet) form.
TESModel *AmuletModel; ///< Biped equipment slot 8 (amulet) model.
NiAVObject *AmuletObject; ///< Biped equipment slot 8 (amulet) attached 3D.
UInt32 unk0D8; ///< Unproven per-slot metadata dword; not part of the 0x0C {form,model,object3D} slot.
TESObjectWEAP *WeaponForm; ///< Perspective-specific equipped weapon form. This form plus WeaponObject is the authoritative identity/generation pair for the currently attached weapon graph.
TESModel *WeaponModel; ///< TESModel selected for the perspective-specific equipped weapon.
NiNode *WeaponObject; ///< Perspective-specific equipped weapon scene clone owned through ActorSkinInfo. Equipment teardown can release or replace this graph; external stored controller pointers must be revalidated against this node.
UInt32 unk0E8; ///< Unproven metadata dword following the weapon {form,model,object3D} group.
TESForm *unk0EC;
TESModel *unk0F0;
NiNode *unk0F4;
UInt32 unk0F8;
TESForm *unk0FC;
TESModel *unk100;
NiNode *unk104;
UInt32 unk108;
TESForm *AmmoForm;
TESModel *AmmoModel;
NiNode *AmmoObject;
UInt32 unk118;
TESObjectARMO *ShieldForm; ///< Biped slot 13 shield form; begins a 0x0C {form,model,object3D} group.
TESModel *ShieldModel;
NiNode *ShieldObject;
UInt32 unk128; ///< Unproven metadata dword following the 0x0C shield equipment slot.
TESObjectLIGH *LightForm; ///< Equipped light form; begins a 0x0C {form,model,object3D} group and is validated as Oblivion form type 0x1A.
TESModel *LightModel;
NiNode *LightObject;
UInt32 unk138; ///< Unproven metadata dword following the 0x0C light equipment slot.
UInt32 unk13C;
UInt32 unk140;
UInt32 unk144;
UInt32 unk148;
UInt32 unk14C;
Actor *owner; ///< Owning Actor pointer, written by ActorSkinInfo_ctor at 0x478755.
};
