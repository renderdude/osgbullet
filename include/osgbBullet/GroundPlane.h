/*************** <auto-copyright.pl BEGIN do not edit this line> **************
 *
 * osgBullet is (C) Copyright 2009-2011 by Kenneth Mark Bryden
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 *************** <auto-copyright.pl END do not edit this line> ***************/

#ifndef __OSGBULLET_GROUND_PLANE_H__
#define __OSGBULLET_GROUND_PLANE_H__ 1


#include <osgbBullet/Export.h>

#include <btBulletDynamicsCommon.h>
#include <btBulletCollisionCommon.h>

#include <osg/Vec4>


namespace osg {
    class Node;
    class Geode;
}

namespace osgbBullet
{


OSGBBULLET_EXPORT osg::Node* generateGroundPlane( const osg::Vec4& plane, btDynamicsWorld* bulletWorld, btRigidBody** rb=NULL );


// osgbBullet
}


// __OSGBULLET_GROUND_PLANE_H__
#endif