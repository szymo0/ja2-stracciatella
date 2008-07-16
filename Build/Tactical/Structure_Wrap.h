#ifndef STRUCURE_WRAP_H
#define STRUCURE_WRAP_H


BOOLEAN	IsTreePresentAtGridno( INT16 sGridNo );
BOOLEAN	IsFencePresentAtGridno( INT16 sGridNo );
BOOLEAN	IsJumpableFencePresentAtGridno( INT16 sGridNo );

BOOLEAN IsDoorVisibleAtGridNo( INT16 sGridNo );

BOOLEAN	WallExistsOfTopLeftOrientation( INT16 sGridNo );

BOOLEAN	WallExistsOfTopRightOrientation( INT16 sGridNo );

BOOLEAN	WallOrClosedDoorExistsOfTopLeftOrientation( INT16 sGridNo );

BOOLEAN	WallOrClosedDoorExistsOfTopRightOrientation( INT16 sGridNo );

BOOLEAN OpenRightOrientedDoorWithDoorOnRightOfEdgeExists( INT16 sGridNo );
BOOLEAN OpenLeftOrientedDoorWithDoorOnLeftOfEdgeExists( INT16 sGridNo );

LEVELNODE	*GetWallLevelNodeAndStructOfSameOrientationAtGridno( INT16 sGridNo, INT8 ubOrientation, STRUCTURE **ppStructure );

BOOLEAN CutWireFence( INT16 sGridNo );
BOOLEAN IsCuttableWireFenceAtGridNo( INT16 sGridNo );

BOOLEAN IsRepairableStructAtGridNo(INT16 sGridNo, SOLDIERTYPE** tgt);
SOLDIERTYPE* GetRefuelableStructAtGridNo(INT16 sGridNo);


BOOLEAN	IsRoofPresentAtGridno( INT16 sGridNo );

INT16 FindDoorAtGridNoOrAdjacent( INT16 sGridNo );

BOOLEAN IsCorpseAtGridNo( INT16 sGridNo, UINT8 ubLevel );

BOOLEAN SetOpenableStructureToClosed( INT16 sGridNo, UINT8 ubLevel );

#endif
