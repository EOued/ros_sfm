# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sfm_ros2:msg/MapGraph.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'poses_id'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapGraph(type):
    """Metaclass of message 'MapGraph'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sfm_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sfm_ros2.msg.MapGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_graph
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_graph
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_graph
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_graph
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_graph

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

            from sfm_ros2.msg import Link
            if Link.__class__._TYPE_SUPPORT is None:
                Link.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapGraph(metaclass=Metaclass_MapGraph):
    """Message class 'MapGraph'."""

    __slots__ = [
        '_header',
        '_map_to_odom',
        '_poses_id',
        '_poses',
        '_links',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'map_to_odom': 'geometry_msgs/TransformStamped',
        'poses_id': 'sequence<int32>',
        'poses': 'sequence<geometry_msgs/Pose>',
        'links': 'sequence<sfm_ros2/Link>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sfm_ros2', 'msg'], 'Link')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import TransformStamped
        self.map_to_odom = kwargs.get('map_to_odom', TransformStamped())
        self.poses_id = array.array('i', kwargs.get('poses_id', []))
        self.poses = kwargs.get('poses', [])
        self.links = kwargs.get('links', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.map_to_odom != other.map_to_odom:
            return False
        if self.poses_id != other.poses_id:
            return False
        if self.poses != other.poses:
            return False
        if self.links != other.links:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def map_to_odom(self):
        """Message field 'map_to_odom'."""
        return self._map_to_odom

    @map_to_odom.setter
    def map_to_odom(self, value):
        if self._check_fields:
            from geometry_msgs.msg import TransformStamped
            assert \
                isinstance(value, TransformStamped), \
                "The 'map_to_odom' field must be a sub message of type 'TransformStamped'"
        self._map_to_odom = value

    @builtins.property
    def poses_id(self):
        """Message field 'poses_id'."""
        return self._poses_id

    @poses_id.setter
    def poses_id(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'i', \
                    "The 'poses_id' array.array() must have the type code of 'i'"
                self._poses_id = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'poses_id' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._poses_id = array.array('i', value)

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'Pose'"
        self._poses = value

    @builtins.property
    def links(self):
        """Message field 'links'."""
        return self._links

    @links.setter
    def links(self, value):
        if self._check_fields:
            from sfm_ros2.msg import Link
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Link) for v in value) and
                 True), \
                "The 'links' field must be a set or sequence and each value of type 'Link'"
        self._links = value
